#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ����ṹ�壬��ʾѧ���ĳɼ���Ϣ
struct Student {
    int id;        
    int chinese;   
    int math;      
    int english;   
    int physics;   
    int chemistry; 
    int biology;  
};

// ����ȽϺ�����������ĿҪ���������
bool cmp(const Student& a, const Student& b) {
    if(a.chinese != b.chinese) 
        return a.chinese > b.chinese;  // �������ĳɼ���������
    else if(a.math != b.math) 
        return a.math > b.math;  // ������ѧ�ɼ���������
    else if(a.english != b.english) 
        return a.english > b.english;  // ����Ӣ��ɼ���������
    else if(a.physics != b.physics) 
        return a.physics > b.physics;  // ��������ɼ���������
    else if(a.chemistry != b.chemistry) 
        return a.chemistry > b.chemistry;  // ���ջ�ѧ�ɼ���������
    else if(a.biology != b.biology)
        return a.biology > b.biology;  // ��������ɼ���������
    else 
        return a.id < b.id;  // ����ѧ����������
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

    // ʹ��customCompare�����Խṹ��������������
    sort(students.begin(), students.end(), cmp);

    // ��������Ľ��
    for (int i = 0; i < n; i++) 
	{
        cout << students[i].id << " " << students[i].chinese << " " << students[i].math << " "
            << students[i].english << " " << students[i].physics << " " << students[i].chemistry << " "
            << students[i].biology << "\n";
    }

    return 0;
}

