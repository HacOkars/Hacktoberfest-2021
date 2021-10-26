#include<iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <unistd.h>

using namespace std;

class TodoApp{
    /*  Data member  */
    string task;
    
    /* methods for app */
    public:
    void addTask();
    void TaskList();   
    void deleteTask(); 

};


void TodoApp::deleteTask(){

    TaskList(); 
    int number;

    cout << "\nEnter a task number , that you want to delete:\n";
    cin >> number;

    string s;
    vector<string> v;

    ifstream task_list;
    task_list.open("todos.txt");

    while(getline(task_list,s)){
        v.push_back(s);
    }

    task_list.close();
    if(number>v.size() ||number<1){
        cout<<"Task "<<number<<" does not exist!"<<endl;
    }
    else{
        ofstream write;
        write.open("todos.txt");
        for(int i=0;i<v.size();i++)
        {
            if(i!=number-1)
                write<<v[i]<<endl;
        }
        cout<<"Deleted task "<<number<<endl;
    }

}


void TodoApp::TaskList(){

    string s;
    vector<string> Task_List;

    ifstream readList;
    readList.open("todos.txt");

    while(getline(readList,s)){
        Task_List.push_back(s);
    }

    readList.close();

    if(Task_List.size()==0){
        cout<<"There are no pending task.\n";
    }
    else{
        cout << "\n--------------------------\n";
        cout << "YOUR PENDING TASKS : \n";
        cout << "--------------------------\n";
        for(int i=Task_List.size()-1;i>=0;i--){
            s=Task_List.back();
            Task_List.pop_back();
            cout<<"["<<(i+1)<<"]"<<" "<<s<<endl;
        }
    }
    
}

void TodoApp::addTask(){
    string temp;
    cout << "Enter your task:\n";
    getline(cin >> ws,task); // extracts all white space characters after cin

    vector<string> tempStorage;

    ifstream read;
    read.open("todos.txt");

    while(getline(read,temp)){
        tempStorage.push_back(temp);
    }

    read.close();

    bool check=false; 

    // current date
    time_t now = time(0);
    tm *current_date = localtime(&now);

    string year,month,day;

     year = to_string((1900 + current_date->tm_year));
     month = to_string((1 + current_date->tm_mon));
     day = to_string(current_date->tm_mday);

    task += " "+day + "-"+month + "-"+year;

    for(int i=0;i<tempStorage.size();i++){
        if(task==tempStorage[i])
        check=true; 
    }

    if(check==false){
        fstream write;
        write.open("todos.txt",ios::app);
        write<<task<<endl;
        cout<<"Added Task : "<<"\""<<task<<"\""<<endl;
        write.close();
    }
    else{
        ofstream write;
        write.open("todos.txt");
        
        for(int i=0;i<tempStorage.size();i++){
            if(tempStorage[i]!=task){
                write<<tempStorage[i]<<endl;
            }
        }

        write<<task<<endl;
        cout<<"Added Task : "<<"\""<<task<<"\""<<endl;
        write.close();
    }


}


void Appmanual(){
        cout<<"\n\n\tMENU";
        cout<<"\n\n\t1.Add Task";
        cout<<"\n\n\t2.Delete Task";
        cout<<"\n\n\t3.See Tasks";
        cout<<"\n\n\t4.Exit";
}

int main(){
    TodoApp user;
    
    do{
        char ch;
        Appmanual();
        try{
            cout<<"\n\nWhat is your Choice (1/2/3/4) ";
            cin >> ch;

            if((ch - '0') < 1 || (ch-'0') > 4){
                throw ch;
            }
        }catch(char ch){
            cout << "There is no such option :" << ch <<"\nPlease pay attention and select an appropriate option.\n";
            sleep(2);
            continue;
        }
        

        switch(ch){
            case '1':
                user.addTask();
                break;
            case '2':
                user.deleteTask();
                break;
            case '3':
                user.TaskList();
                break;
            case '4':
                exit(0);
                break;
        }

    }while(1);


    return 0;
}