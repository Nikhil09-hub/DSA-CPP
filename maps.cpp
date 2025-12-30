#include <bits/stdc++.h>
using namespace std;
//“Maps are sorted associative containers. Keys can be searched in logarithmic time, but values require traversal, and maps do not support indexing.”
printMap(map<int,string> &mp){
    for(auto p:mp){
        cout << p.first << "  " << p.second << endl;
    }
}
//using iterator
/*for(it = student.begin(); it != student.end(); it++) {
    cout << it->first << " " << it->second << endl;
}*/

int main(){
    //stores keys in sorted order
    map<int , string> student;
    student[1]="Manasa";
    //at also is used
    student[2]="Anand";
    cout << "Elements in map\n";
    for(auto p:student){
        cout << p.first << " " << p.second;
        cout <<'\n';
    }
    //unordered map
    unordered_map<string,int> marks;
    marks["Manasa"]=95;
    marks.insert({"Anand",97});
    marks.insert({"Nani",93});
    cout << "Students marks \n";
    for(auto p:marks){
        cout << p.first << "  " << p.second;
        cout << "\n";
    }
    //finding key in maps
    if(marks.find("Nani")!=marks.end()){
        cout << "Student exists" << endl;
    }
    else{
        cout << "Student does not exist" << endl; 
    }
    //passing map as an argument
    printMap(student);
    return 0;
}
//find() vs count()
//find() → returns iterator
//count() → returns 0 or 1 (since map has unique keys)