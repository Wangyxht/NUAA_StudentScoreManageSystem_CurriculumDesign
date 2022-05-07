#define _CRT_SECURE_NO_WARNINGS 1

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<malloc.h>
#include<limits.h>

//______________________________________________________________________________________________________//
//                                           成绩管理系统 宏定义

//学生成绩表初始化长度
#define LIST_INIT_SIZE 100
//每次分配新内存的长度
#define LIST_INCREASE 10
//初始课程表文件行数
//#define MAX_COURSELIST_LINE 8
//初始选课表文件行数
//#define MAX_STUCOURSELIST_LINE 14
//初始学生表文件行数
//#define MAX_STULIST_LINE 9

//最大成绩个数
#define MAX_SCORE_DATA 30
//最大学生ID长度
#define STUDET_ID_MAXLEN  8
//最大课程ID长度
#define CLASS_ID_MAXLEN 5
//未修读的课程成绩 填入-1
#define UNSTUDY -1

//_____________________________________________________________________________________________________//
//                                         成绩管理系统 类型定义




//结构定义 学生信息
typedef struct {
    char studentID[10];//学生学号
    char studentName[20];//学生姓名（10汉字以内）
    char studentGender[3];//学生性别
    int studentAge;//学生年龄

}Student;

//结构定义 课程信息
typedef struct {
    char couresID[10];//课程ID
    char couresName[25];//课程名称（12汉字以内）
    float credit;//学分
    int scorelistLocation;//该门课程成绩应该在成绩表内填入的数组位置
}Course;

/*
   初始写入后课程信息与成绩表score[i]的关系
    
    j0101 计算机基础知识与实践    3           score[0]
    s0001 高等数学1              5            score[1]
    s0002 高等数学2            3.5            score[2]
    g1001 马克思主义政治经济学    2.5         score[3]
    g2022 体育与体能测试          2           score[4]
    x0111 大学语文和国学欣赏     2            score[5]
    x1234 大学生修养            1.5           score[6]
    z1122 程序设计语言C++        5            score[7]

*/


//结构定义 学生选课信息
typedef struct {
    char studentID[10];
    char couresID[10];
    float score;
}StuCourse;

//结构定义 学生成绩单
typedef struct{
    char studentID[10];
    char studentName[20];
    float score[MAX_SCORE_DATA];//各课程成绩
    float weightAverage;//加权平均分
    float creditTotal;//总学分

}StuScore;


//结构定义 学生选课信息线性表
typedef struct {
    StuCourse* StuCourseData;
    int lengthStuCourse;//当前长度
    int listSizeStuCourse;//当前已经分配的储存容量（以sizeof（StuCourseList）为单位）
}StuCourseList;

//结构定义 学生个人信息线性表
typedef struct {
    Student* studentData;
    int lengthStu;
    int listSizeStu;
}StuList;

//结构定义 课程信息线性表
typedef struct{
    Course* CourseListData;
    int lengthCourse;
    int listSizeCourse;

}CourseList;

//结构定义 学生成绩信息线性表
typedef struct{
    StuScore* StuScoreData;
    int lengthScore;
    int listSizeScore;

}Scorelist;


//____________________________________________________________________________________________________________________//
//                                          成绩管理系统 函数声明

//起始页菜单
extern char StartMenu(void);
//主菜单
extern char MainMenu(void);
//显示菜单
extern char DisplayMenu(void);
//输出课程选择菜单
extern char CourseDisplayChoiceMenu(void);
//输出学生信息选择菜单
extern char StuDisplayChoiceMenu(void);
//输出成绩选择菜单
extern char ScoreDisplayChoiceMenu(void);
//增添元素菜单
extern char InsertMenu(void);
//询问更改菜单
extern char ReplaceMenu(void);
//输入退出询问菜单
extern char InsertExitMenu(void);
//删除信息菜单
extern char DeleteMenu(void);
//询问是否删除该数据
extern char AskDelete(void);
//查询信息菜单
extern char QueryMenu(void);
//查询学生信息方式菜单
extern char QueryStuMethodMenu(void);
//查询课程信息方式菜单
extern char QueryCourseMethodMenu(void);
//获取需要查询的学号
extern char* SearchInputStudentID(char*);
//获取需要查询的姓名
extern char* SearchInputStudentName(char*);
//获取需要查询的课程号
extern char* SearchInputCourseID(char*);
//获取需要查询的姓名
extern char* SearchInputCourseName(char*);
//导出文件菜单选择
extern char WriteToFileMenu(void);
//打印一条横线
extern void PrintLine(void);
//输入错误提示
extern void ErrorInputMenu(void);
//内存分配失败提示
extern void ErrorMemoryMenu(void);
//导出成功提示
extern void OutPutSuccess(void);
//导出失败提示
extern void OutPutFailure(void);
//显示查找失败提示
extern void SearchFailure(void);
//录入学生选课失败提示
extern void InputStuCourseFailure(void);

//初始化相关函数声明
// ———————————————————————————————————————
//初始化空表
extern int InitiList(Scorelist*,CourseList*,StuCourseList*,StuList*);
//写入课程文件信息
extern int LoadFileClassInf(CourseList*,int);
//写入学生选课信息文件
extern int LoadFileStuClassInf(StuCourseList*,int);
//写入学生名单信息
extern int LoadFileStuInf(StuList*,int);
//导入前查询学生、课程、选课表行数
extern void CheckDataFileRow(int*,int*,int*);
//返回单个文件行数
extern int CheckOneFileRow(FILE*);
//创建学生成绩单线性表
extern int CreatScoreList(Scorelist*,StuList*,StuCourseList*,CourseList*);
//获取某门课程在成绩表中score[n]的位置n
extern int GetClassLoaction(char*,CourseList*);
//计算加权平均成绩
extern float CalculateAverage(float*,CourseList*,float*);
//显示列表信息 函数声明
// ———————————————————————————————————————
//显示学生信息
extern void PrintStudentList(const StuList*);
//显示课程信息
extern void PrintCourseList(const CourseList*);
//显示学生成绩信息
extern void PrintScoreList(const Scorelist*);
//显示查找的学生信息
extern void PrintSearchStu(const StuList*,const int);
//显示查找的课程信息
extern void PrintSearchCourse(const CourseList*, const int);

// ———————————————————————————————————————

//复制学生列表
extern void CopyStuList(StuList*, const StuList*);
//复制课程信息
extern void CopyCourseList(CourseList*, const CourseList*);
//复制成绩信息
extern void CopyScore(Scorelist*, const Scorelist*);

//排序算法 函数声明
// ———————————————————————————————————————

//将学生列表按学号排序（采用随机化快速排序（Quicksort）算法）    参考《算法导论》第七章 快速排序 伪代码
//————————————————————————————————————————
//以下声明均为QuickSort函数及其辅助函数

//将学生列表进行快速排序(QuickSort)
extern void SortStuList(StuList*,int,int);
//QuickSort划分
extern int PartitionStu(StuList*,int,int);
//交换两个学生信息位置
extern  void SwapStuElement(Student*, Student*);
//将学号转化为数字
extern  int StuID_Num(const char*);
//————————————————————————————————————————

//将成绩列表按平均成绩排序（采用随机化快速排序（Quicksort）算法）
//————————————————————————————————————————
//以下声明均为QuickSort函数及其辅助函数

//将学生成绩列表进行快速排序(QuickSort)
extern void SortScoreList(Scorelist*, int, int);
//QuickSort划分
extern int PartitionScore(Scorelist*, int, int);
//交换两个学生信息位置
extern  void SwapScoreElement(StuScore*, StuScore*);
//————————————————————————————————————————

//将课程按课程号升序排序(冒泡排序算法）
//————————————————————————————————————————
//课程号排序函数（Bubble Sort）
extern void SortCourseList(CourseList*);
//比较两个课程名的大小
extern int CourseNumCopmare(const char*,const char*);
//交换两个课程信息位置
extern void SwapCourseElement(Course*,Course*);

//————————————————————————————————————————


//插入元素 函数声明
//————————————————————————————————————————
//输入学生信息
extern void InputStuData(Student*);
//增添学生信息
extern void StuListInsert(StuList*, Student*);
//顺序查找学号相同的信息
extern int StuReplaceSearch(const StuList*,const char*);
//替换学生信息
extern void StuListReplace(StuList*, Student*, const int);
//输入课程信息
extern void InputCourseData(Course*);
//顺序查找相同的课程ID
extern int CourseReplaceSearch(const CourseList*, const char*);
//置入新的课程信息
extern void CourseListInsert(CourseList*, Course*, const Scorelist*);;
//替换课程信息
extern void CourselistReplace(CourseList*, Course*, Scorelist*, const int);
//置入新的选课信息
extern void StuCourseListInsert(StuCourseList*, StuCourse*);
//输入学生选课信息（带验证）
extern int InputStuCourseData(StuCourse*, CourseList* , StuList* );
//顺序查找选课表学号课程号匹配项
extern int StuCourseReplaceSearch(StuCourseList*,const char*,const char*);
//替换选课信息
extern void StuCourseListReplace(StuCourseList*, StuCourse*,  const int);
//将新增的学生信息导入成绩表
extern void InsertScoreListStu(Scorelist*,Student*);
//替换成绩表内学生名称（以学生ID为唯一凭证）
extern void ScoreListReplaceName(Scorelist*, Student*);
//将新增的学生成绩填入成绩表
extern void InsertScoreListScore(Scorelist*, CourseList* ,StuCourse*);
//获取一个全空的score位置
extern int ScanVoidScoreLocation(Scorelist*,CourseList*);
//查询一个课程表中是否有相同的scorelocation
extern int SearchSameLocation(CourseList*, int);
//————————————————————————————————————————

//删除元素 函数声明
//————————————————————————————————————————
//删除学生表上第i+1个学生信息
extern void DeleteStu(StuList*,StuCourseList*,Scorelist*, const int i);
//删除学生信息时顺带删除课程表
extern void StuDeleteStuCourse(StuCourseList*,const char*);
//删除学生信息时顺带删除成绩表
extern void StuDeleteScore(Scorelist*,const char*);
//按学生姓名查找、询问并删除学生信息
extern void DeleteStuName(StuList*, StuCourseList*, Scorelist*);
//删除课程信息表第i+1个课程信息
extern void DeleteCourse(CourseList*, const int i);
//按课程名查找、询问并课程信息删除
extern void DeleteCourseName(CourseList*);
//按学生ID查找、询问并删除课程信息
extern void DeleteStuCourse(StuCourseList*,const CourseList* ,const StuList*);
//删除选课表上第i+1个选课信息
extern void DeleteStuCourseElement(StuCourseList*,const int);
//显示选课记录
extern void PrintStuCourse(const StuCourseList*,const CourseList*,const StuList*, const int);

//查找 函数声明
//————————————————————————————————————————
//按学生ID查询学生信息
extern int SearchStudentID(const StuList*,const char* );
//按学生姓名查询学生信息
extern int SearchStudentName(const StuList*,const char*);
//按课程ID查询课程信息
extern int SearchCourseID(const CourseList*, const char*);
//按课程名查询课程信息
extern void SearchCourseName(const CourseList*, const char*);
//按学生ID查询学生成绩
extern void SearachScoreStudentID(const Scorelist*,const CourseList*, const StuCourseList* , const char*);
//按学生姓名查询学生成绩
extern void SearchScoreStudentName(const Scorelist*, const CourseList*, const StuCourseList*, const char*);
//查询score数组的任一位置的课程对应课程列表的课程位置
extern int SearchCourseScoreLocation(const CourseList*,const int);
//————————————————————————————————————————

//导出函数声明
//————————————————————————————————————————
//导出列表
extern void WriteToFileList(const StuList*, const CourseList*, const StuCourseList*);
//写入学生列表
extern void WriteStuList(FILE*, const StuList*);
//写入课程列表
extern void WriteCourseList(FILE*, const CourseList*);
//写入选课列表
extern void WriteStuCourseList(FILE*, const StuCourseList*);
//写入学生成绩
extern void WriteStuScore(const StuList*, const CourseList*, const StuCourseList*,const Scorelist*);
//在文件中打印横线
extern void fPrintLine(FILE*);
