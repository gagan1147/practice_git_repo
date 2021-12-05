import threading,time

def task(name):
    time.sleep(2)
    print(name)
    

for i in range(10):
    task1 = threading.Thread(target=task,args=[i])
    task1.start()
    #task()