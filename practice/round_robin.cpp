#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
    vector<int> completion_time;
    int no_process = 3;
    int time_quantum = 2;
    int time = 0;
    int burst_time[no_process] = {10,5,8};
    int arrival[no_process] = {0,0,0};
    int tat[no_process];
    int wt[no_process];
   
    queue<int> q1;
    for(int i = 0;i<no_process;i++){
        q1.push(burst_time[i]);
    }
    int i = 0;
    while (!q1.empty())
    {
        int process_time = q1.front();
        q1.pop();
        
        if (process_time>time_quantum){
            process_time = process_time - time_quantum;
            time  = time + time_quantum;
            q1.push(process_time);
        }
        else{

            time  = time + process_time;
            cout<<"Completion TIME"<<" : "<<time<<" "<<endl;
            completion_time.push_back(time);
        }
    }
    for(int i=0;i<no_process;i++){
        tat[i] = completion_time[i]-arrival[i];
        wt[i] = tat[i]- burst_time[i];
    }
    int wt_sum=0,tat_sum=0;
    for(int i=0;i<no_process;i++){
        tat_sum = tat_sum + tat[i];
        wt_sum = wt_sum + wt[i];
    }
    cout<<"TAT : "<<(float)tat_sum/no_process<<endl;
    cout<<"wating time : "<<(float)wt_sum/no_process<<endl;

    


    return 0;
}

