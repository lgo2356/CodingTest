#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    string name;
    int korean, english, math;
};

bool compare(Student a, Student b)
{
    if (a.korean == b.korean)
    {
        if (a.english == b.english)
        {
            if (a.math == b.math)
            {
                return a.name < b.name;
            }
            return a.math > b.math;
        }
        return a.english < b.english;
    }

    return a.korean > b.korean;
}

int main(void)
{
    int N;
    cin >> N;
    vector<Student> v;

    for (int i = 0; i < N; i++)
    {
        Student student;
        cin >> student.name >> student.korean >> student.english >> student.math;
        v.push_back(student);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << v[i].name << '\n';
    }

    return 0;
}