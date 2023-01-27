#include <iostream>
using namespace std;
struct Student
{
   int age;
   string first_name;
   string last_name;
   int std; 
};
int main()
{
    Student st;
    cin>>st.age>>st.first_name>>st.last_name>>st.std;
    cout<<st.age<<" "<<st.first_name<<" "<<st.last_name<<" "<<st.std;
    return 0;
}
