from googletrans import Translator
import os,json,threading,time
   

#'ar','zh-tw','de','es','fr','it','pt','vi'

arr = ['ar','zh-tw','de','es','fr','it','pt','ru','vi']

def task(i):
    file_name = i
    translator = Translator()
    #print(file_name)
    with open('ru.json', 'r') as openfile:
        json_object = json.load(openfile)

    #print(json_object)
    for key,value in json_object.items():
        try:
            result = translator.translate(key,file_name,'en').text
            #print(key,result)
            json_object[key] = str(result)
        except:
            #print(key,result)
            json_object[key] = str(key)
    with open(file_name+"m.json", "w", encoding='utf8') as outfile:
        json.dump(json_object, outfile, ensure_ascii=False)

for i in arr:
    task1 = threading.Thread(target=task,args=[i])
    task1.start()
