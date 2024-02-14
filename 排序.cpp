#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 定义结构体，表示学生的成绩信息
struct Student {
    int id;        
    int chinese;   
    int math;      
    int english;   
    int physics;   
    int chemistry; 
    int biology;  
};

// 定义比较函数，按照题目要求进行排序
bool cmp(const Student& a, const Student& b) {
    if(a.chinese != b.chinese) 
        return a.chinese > b.chinese;  // 按照语文成绩降序排列
    else if(a.math != b.math) 
        return a.math > b.math;  // 按照数学成绩降序排列
    else if(a.english != b.english) 
        return a.english > b.english;  // 按照英语成绩降序排列
    else if(a.physics != b.physics) 
        return a.physics > b.physics;  // 按照物理成绩降序排列
    else if(a.chemistry != b.chemistry) 
        return a.chemistry > b.chemistry;  // 按照化学成绩降序排列
    else if(a.biology != b.biology)
        return a.biology > b.biology;  // 按照生物成绩降序排列
    else 
        return a.id < b.id;  // 按照学号升序排列
}

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);
    
    for (int i = 0; i < n; i++) 
	{
        cin >> students[i].id >> students[i].chinese >> students[i].math >> students[i].english
            >> students[i].physics >> students[i].chemistry >> students[i].biology;
    }

    // 使用customCompare函数对结构体向量进行排序
    sort(students.begin(), students.end(), cmp);

    // 输出排序后的结果
    for (int i = 0; i < n; i++) 
	{
        cout << students[i].id << " " << students[i].chinese << " " << students[i].math << " "
            << students[i].english << " " << students[i].physics << " " << students[i].chemistry << " "
            << students[i].biology << "\n";
    }

    return 0;
}

