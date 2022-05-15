#include"ScoreManagement.h"



//__________________________________________________________________________________________________________
//                                             函数的定义





//显示菜单函数
//————————————————————————————————————————

//打印横线
void PrintLine(void)
{
    printf("\t\t___________________________________________________________________________________\n\n");
}
//起始页菜单
char StartMenu(void)
{
    char choice;
    printf("\n\n\n\n\n\n\n");
    PrintLine();
    printf("\t\t\t                             学生成绩管理系统\n\n");
    printf("\t\t               版本号：Ver Alpha 1.0.3\t\t更新日期：2022/5/7\n\n");
    printf("\t\t                     按Q退出程序，按其他任意键进入管理系统\n\n");
    PrintLine();

    choice = getchar();
    while (getchar() != '\n');
    return choice;

}
//主菜单函数
char MainMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  主菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 导入初始数据\t\t2) 显示所有记录\t\t3) 输入数据记录\n");
    printf("\t\t\t4) 删除数据记录\t\t5) 查询数据信息\t\t6) 批量导出数据\n");
    printf("\t\t\tQ) 退出管理系统\t\t              \n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char DisplayMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  记录信息显示菜单\n");
    printf("\t\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 显示课程信息\t\t2) 显示学生名单\t\t3) 显示学生成绩单\n");
    printf("\t\t\tQ) 返回主菜单\n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char CourseDisplayChoiceMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  显示类型菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 按课程号升序排列显示\t\t2) 按数据库原顺序显示\t\tQ) 返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char StuDisplayChoiceMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  显示类型菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 按学号升序排列显示\t\t2) 按数据库原顺序显示\t\tQ) 返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char ScoreDisplayChoiceMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  显示类型菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 按成绩降序排列显示\t\t2) 按数据库原顺序显示\t\tQ) 返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char InsertMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                    记录增添菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 添加学生信息\t\t2) 添加课程信息\t\t3) 添加选课记录\n");
    printf("\t\t\tQ) 返回主菜单\n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char InsertExitMenu(void)
{
    char choice=0;

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                           *请输入需要继续进行的操作*\n\n");
    printf("\n\t\t                     *按任意键以继续添加信息，按Q以停止添加信息*\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("______________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%c", &choice);
    while (getchar() != '\n');
    system("cls");

    return choice;
}

char DeleteMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                    记录删除菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 删除学生信息\t\t2) 删除课程信息\t\t3) 删除选课记录\n");
    printf("\t\t\tQ) 返回主菜单\n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;


}

char AskDelete(void)
{
    char choice;
    printf("\n\n\n\n\n");
    PrintLine();
    printf("\t\t                                       [!]\n\n");
    printf("\t\t\t         *查询到该信息已存在于列表，是否删除数据？*\n\n");
    printf("\t\t                             \tY）是      N）否\t\t\n\n");
    printf("\t\t\t   *注意：如果删除的是学生记录，该学生所有关联记录一并删除*\n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = tolower(getchar());
    while (getchar() != '\n');
    system("cls");
    return choice;

}

char ReplaceMenu(void)
{
    char choice;
    printf("\n\n\n\n\n");
    PrintLine();
    printf("\t\t                                       [!]\n\n");
    printf("\t\t\t         *查询到该关键字ID已存在于列表，是否进行覆盖？*\n\n");
    printf("\t\t                             \tY）是      N）否\t\t\n\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = tolower(getchar());
    while (getchar() != '\n');
    return choice;
}

char QueryMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  查询数据菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 查询学生信息\t\t2)查询课程信息\t\t3)查询成绩信息\t\t\n\t\t\tQ)返回主菜单\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char QueryStuMethodMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  查询方法菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 按学号查询信息\t\t2)按姓名查询信息\t\tQ)返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char QueryCourseMethodMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  查询方法菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 按课程号查询信息\t\t2)按课程名查询信息\t\tQ)返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

char WriteToFileMenu(void)
{
    char choice;
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                              学生成绩管理系统\n");
    PrintLine();
    printf("\t\t                                  导出菜单\n");
    printf("\t\t请按以下按键进行相关操作：\n");
    printf("\t\t\t1) 导出学生、课程与选课信息\t\t2)导出成绩单\t\tQ)返回\n");
    PrintLine();
    printf("\t\t\t\t请输入需要进行的操作:_______\b\b\b\b");

    choice = getchar();
    while (getchar() != '\n');
    return choice;
}

void ErrorInputMenu(void)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t\a                                     |X|\n\n");
    printf("\n\t\t                *输入错误，请尝试重试输入选单前的字母*\n\n");
    PrintLine();

    system("pause");
    system("cls");
}

void ErrorMemoryMenu(void)
{
    {
        system("cls");
        printf("\n\n\n\n");
        PrintLine();
        printf("\t\t\a                                     |X|\n\n");
        printf("\n\t\t                               *内存分配失败*\n\n");
        PrintLine();

        system("pause");
        system("cls");
        exit(OVERFLOW);
    }
}

void OutPutSuccess(void)
{
    {
        {
            system("cls");
            printf("\n\n\n\n");
            PrintLine();
            printf("\t\t                                    |->|\n\n");
            printf("\n\t\t                               *成功创建并导出文件*\n\n");
            PrintLine();

            system("pause");
            system("cls");
        }
    }
}

void OutPutFailure(void)
{
    {
        system("cls");
        printf("\n\n\n\n");
        PrintLine();
        printf("\t\t\a                                     |X|\n\n");
        printf("\n\t\t                               *导出文件失败*\n\n");
        PrintLine();

        system("pause");
        system("cls");
        exit(EXIT_FAILURE);
    }
}

void SearchFailure(void)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t\a                                     |!|\n\n");
    printf("\n\t\t                *查询失败，此表内不存在有关该关键字的信息*\n\n");
    PrintLine();

    system("pause");
    system("cls");
}

void InputStuCourseFailure(void)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t\a                                    |X|\n\n");
    printf("\n\t\t                          *  添加学生选课信息失败 *\n\n");
    printf("\n\t\t                        >需要匹配的学生ID以及课程ID\n\n");
    printf("\n\t\t                      >成绩必须在区间[0,120]或暂无（-1）\n\n");
    PrintLine();
}
 
//************************************************************************************************************
//                                                   功能函数

//初始化空表
int InitiList(Scorelist* listScore,CourseList* listCourse,StuCourseList* listStuCourse,StuList* listStudent)
{   

    listScore->StuScoreData=(StuScore*)malloc(LIST_INIT_SIZE*sizeof(StuScore));
    listCourse->CourseListData=(Course*)malloc(LIST_INIT_SIZE*sizeof(Course));
    listStuCourse->StuCourseData=(StuCourse*)malloc(LIST_INIT_SIZE*sizeof(StuCourse));
    listStudent->studentData = (Student*)malloc(LIST_INIT_SIZE * sizeof(Student));

    if(listCourse->CourseListData && listScore->StuScoreData && listStuCourse->StuCourseData && listStudent->studentData)
    {
        listCourse->listSizeCourse=LIST_INIT_SIZE;
        listCourse->lengthCourse=0;

        listScore->listSizeScore=LIST_INIT_SIZE;
        listScore->lengthScore=0;

        listStuCourse->listSizeStuCourse=LIST_INIT_SIZE;
        listStuCourse->lengthStuCourse=0;

        listStudent->listSizeStu = LIST_INIT_SIZE;
        listStudent->lengthStu = 0;

        return 1;
    }

    else
    {
        free(listScore->StuScoreData);
        free(listCourse->CourseListData);
        free(listStuCourse->StuCourseData);
        printf("内存分配失败！\a\n");
        system("pause");
        return 0;
    }
    
}
//写入课程信息
int LoadFileClassInf(CourseList* listCourse, int row)
{
    FILE* fp;
    int line;
    
    if ((fp = fopen("clist.txt", "r")) == NULL)
    {
        printf("无法打开课程文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);
    }
    else
    {
        for (line = 0; line < row; line++)
        {   
            listCourse->lengthCourse++;
            listCourse->CourseListData[line].scorelistLocation = line;
            fscanf(fp, "%s", listCourse->CourseListData[line].couresID);
            fscanf(fp, "%s", listCourse->CourseListData[line].couresName);
            fscanf(fp, "%f", &listCourse->CourseListData[line].credit);
        }
        fclose(fp);
        return 1;
    }

}
//写入学生选课信息
int LoadFileStuClassInf(StuCourseList* listStuCourse,int row)
{
    FILE* fp;
    int line;

    if ((fp=fopen("sclist.txt", "r"))== NULL)
    {
        printf("无法打开选课信息文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);

    }
    else
    {
        for (line = 0; line < row; line++)
        {
            listStuCourse->lengthStuCourse++;
            fscanf(fp,"%s", listStuCourse->StuCourseData[line].studentID);
            fscanf(fp,"%s", listStuCourse->StuCourseData[line].couresID);
            fscanf(fp,"%f", &listStuCourse->StuCourseData[line].score);
        }
        fclose(fp);
        return 1;
    }
}
//写入学生名单信息
int LoadFileStuInf(StuList* listStudent, int row)
{
    FILE* fp;
    int line;


    if ((fp = fopen("slist.txt", "r"))==NULL)
    {
        printf("无法打开学生信息文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);
    }
    else
    {
        for (line = 0; line < row; line++)
        {
            listStudent->lengthStu++;
            fscanf(fp, "%s", listStudent->studentData[line].studentID);
            fscanf(fp, "%s", listStudent->studentData[line].studentName);
            fscanf(fp, "%s",listStudent->studentData[line].studentGender);
            fscanf(fp, "%d", &listStudent->studentData[line].studentAge);
        }
        fclose(fp);
        return 1;
    }
}
//创建学生成绩单线性表
int CreatScoreList(Scorelist* listScore, StuList* listStudent, StuCourseList* listStudentCourse, CourseList* ListCourse)
{
    int i,j;
    //从学生列表导入学生信息到学生成绩表
     //————————————————————————————————————————————————————
    for (i = 0; i < listStudent->lengthStu; i++)
    {        
        strcpy(listScore->StuScoreData[i].studentID, listStudent->studentData[i].studentID);
        strcpy(listScore->StuScoreData[i].studentName, listStudent->studentData[i].studentName);
        
        //初始化成绩列表为UNSTUDY（-1）
        for (j = 0; j < MAX_SCORE_DATA; j++)
        {
            listScore->StuScoreData[i].score[j] = (float) UNSTUDY;
            
        }
        listScore->lengthScore++;


    }


    //从选课信息表导入课程信息到学生成绩表
    //————————————————————————————————————————————————————
    for (i = 0; i < listScore->lengthScore; i++)
    {

        for (j = 0; j < listStudentCourse->lengthStuCourse; j++)
        {
            if (strcmp(listStudentCourse->StuCourseData[j].studentID, listScore->StuScoreData[i].studentID) == 0)
            {
                listScore->StuScoreData[i].score[GetClassLoaction(listStudentCourse->StuCourseData[j].couresID, ListCourse)]
                = listStudentCourse->StuCourseData[j].score;
            }
        }

    }


    for (i = 0; i < listScore->listSizeScore; i++)
    {
        float totalCredit=0;


        listScore->StuScoreData[i].weightAverage = CalculateAverage(listScore->StuScoreData[i].score, ListCourse, &totalCredit);
        listScore->StuScoreData[i].creditTotal = totalCredit;
        
    }


    return 1;


}
void CheckDataFileRow(int* rowStu, int* rowCourse, int* rowStuCourse)
{
    FILE* fp;

    if ((fp = fopen("slist.txt", "r")) == NULL)
    {
        printf("无法打开学生文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);
    }
    else
    {
        *rowStu=CheckOneFileRow(fp);
    }

    fclose(fp);

    if ((fp = fopen("clist.txt", "r")) == NULL)
    {
        printf("无法打开课程文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);
    }
    else
    {
        *rowCourse = CheckOneFileRow(fp);
    }

    fclose(fp);

    if ((fp = fopen("sclist.txt", "r")) == NULL)
    {
        printf("无法打开选课文件\n\a");
        system("pause");
        exit(EXIT_FAILURE);
    }
    else
    {
        *rowStuCourse = CheckOneFileRow(fp);
    }

    fclose(fp);

    return;
}
int CheckOneFileRow(FILE*ptr)
{
    int rowNum=1;
    char ch=0;
    while ((ch=fgetc(ptr)) != EOF)
    {
        if (ch == '\n')
        {
            rowNum++;
        }
    }

    
    fflush(ptr);
    return rowNum;
}
//获取课程填入成绩单的位置
int GetClassLoaction(char* ClassID, CourseList* listCourse)
{
    int i;
    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        if (strcmp(ClassID, listCourse->CourseListData[i].couresID)==0)
            return listCourse->CourseListData[i].scorelistLocation;

    }

    printf("未找到课程ID为%s的课程ID，请确认后重试.\n", ClassID);
    system("pause");
    exit(EXIT_FAILURE);
    return -1;
}
//计算加权平均值
float CalculateAverage(float* score, CourseList* listCourse,float* totalCredit)
{
    int i;
    float sumScore=0;


    for (i = 0; i < MAX_SCORE_DATA; i++)
    {
        if (score[i] >=0)
        {
            *totalCredit += listCourse->CourseListData[i].credit;
            sumScore += score[i]* listCourse->CourseListData[i].credit;

        }


    }

    if (sumScore == 0)
        return 0.0;
    else
       return sumScore / *totalCredit;
}

//
void PrintStudentList(const StuList* liststudent)
{
    int i;
    system("cls");

    printf("\n\n\n\n");

    printf("\t\t\t                            *学生信息列表*\n\n");
    PrintLine();
    printf("\t\t  学号\t\t         姓名\t\t               性别\t       年龄\n");
    PrintLine();
    for (i = 0; i < liststudent->lengthStu; i++)
    {
        printf("\t\t%08s\t\t%-20s\t\t%-3s\t\t%-3d\n", liststudent->studentData[i].studentID, liststudent->studentData[i].studentName,
            liststudent->studentData[i].studentGender, liststudent->studentData[i].studentAge);

            if (i > 0 && i % 10==0)
            {
                PrintLine();
                system("pause");
                system("cls");
                printf("\t\t\t                            *学生信息列表*\n\n");
                PrintLine();
                printf("\t\t  学号\t\t         姓名\t\t               性别\t       年龄\n");
                PrintLine();
            }
    }
    PrintLine();
    system("pause");
    system("cls");
}

void PrintCourseList(const CourseList* listCourse)
{
    int i;
    system("cls");

    printf("\n\n\n\n");

    printf("\t\t\t                            *课程信息列表*\n\n");
    PrintLine();
    printf("\t\t  课程\t\t\t\t\t课程ID\t\t\t学分\n");
    PrintLine();

    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        printf("\t\t%-25s\t\t%-10s\t\t%-4.1f\n", listCourse->CourseListData[i].couresName, listCourse->CourseListData[i].couresID,
            listCourse->CourseListData[i].credit);

        if (i > 0 && i % 10 == 0)
        {
            PrintLine();
            system("pause");
            system("cls");
            printf("\n\n\n\n");

            printf("\t\t\t                            *课程信息列表*\n\n");
            PrintLine();
            printf("\t\t  课程\t\t\t\t\t课程ID\t\t\t学分\n");
            PrintLine();
        }
    }
    PrintLine();
    system("pause");
    system("cls");

}

void PrintScoreList(const Scorelist* listScore)
{
    int i;
    system("cls");

    printf("\n\n\n\n");

    printf("\t\t\t                            *成绩信息列表*\n\n");
    PrintLine();
    printf("\t\t  学号\t\t\t学生姓名\t\t        总学分\t    加权平均成绩\n");
    PrintLine();

    for (i = 0; i < listScore->lengthScore; i++)
    {
        printf("\t\t%-10s\t\t%-20s\t\t%-3.2f\t\t%3.3f\n", listScore->StuScoreData[i].studentID, listScore->StuScoreData[i].studentName,
            listScore->StuScoreData[i].creditTotal, listScore->StuScoreData[i].weightAverage);

        if (i > 0 && i % 10 == 0)
        {
            PrintLine();
            system("pause");
            system("cls");
            printf("\n\n\n\n");

            printf("\t\t\t                            *成绩信息列表*\n\n");
            PrintLine();
            printf("\t\t  学号\t\t\t学生姓名\t\t        总学分\t\t加权平均成绩\n");
            PrintLine();
        }
    }
    PrintLine();
    system("pause");
    system("cls");
}


//复制学生列表
void CopyStuList(StuList*copyList, const StuList* listStudent)
{
    int i;
        
    copyList->studentData = NULL;
    copyList->lengthStu = 0;
    copyList->listSizeStu = 0;
    
    if (listStudent->studentData)
    {
        copyList->studentData = (Student*)malloc(listStudent->lengthStu * sizeof(Student));
        
        if (copyList->studentData)
        {
            copyList->lengthStu = listStudent->lengthStu;
            copyList->listSizeStu = listStudent->lengthStu;

            for (i = 0; i < copyList->lengthStu && i < listStudent->lengthStu; i++)
            {
                copyList->studentData[i] = listStudent->studentData[i];
            }
        }

    }
    



}

//复制成绩列表
void CopyScore(Scorelist* copyList, const Scorelist* listScore)
{
    int i;

    copyList->StuScoreData = NULL;
    copyList->lengthScore = 0;
    copyList->listSizeScore = 0;

    if (listScore->StuScoreData)
    {
        copyList->StuScoreData = (StuScore*)malloc(listScore->lengthScore * sizeof(StuScore));

        if (copyList->StuScoreData)
        {
            copyList->lengthScore = listScore->lengthScore;
            copyList->listSizeScore = listScore->listSizeScore;

            for (i = 0; i < copyList->lengthScore && i < listScore->lengthScore; i++)
            {
                copyList->StuScoreData[i] = listScore->StuScoreData[i];
            }
        }

    }

}


void CopyCourseList(CourseList* CopyList, const CourseList* listCourse)
{
    int i;
    CopyList->CourseListData = NULL;
    CopyList->lengthCourse = 0;
    CopyList->listSizeCourse = 0;

    if (listCourse->CourseListData)
    {
        CopyList->CourseListData = (Course*)malloc(listCourse->listSizeCourse * sizeof(Course));
        if (CopyList->CourseListData)
        {
            CopyList->lengthCourse = listCourse->lengthCourse;
            CopyList->listSizeCourse = listCourse->lengthCourse;

            for (i = 0; i < CopyList->lengthCourse && i < listCourse->lengthCourse; i++)
            {
                CopyList->CourseListData[i] = listCourse->CourseListData[i];
            }
        }
    }
}

//将学生列表进行排序（采用随机化快速排序（Quicksort）算法）
//————————————————————————————————————————————————————
void SortStuList(StuList* listStudent,int startlist,int endlist)
{
    int newListBorder;
    if (startlist < endlist)
    {
        newListBorder = PartitionStu(listStudent, startlist, endlist - 1);
        SortStuList(listStudent, startlist, newListBorder);
        SortStuList(listStudent, newListBorder+1, endlist);
    }
    return;

}

int StuID_Num(const char* studentID)
{
    int num = 0;

    while (*studentID!= '\0')
    {
        num =num*10+( * studentID - '0');
        studentID++;

    }

    return num;
}

int PartitionStu(StuList* listStudent, int startlist, int endlist)
{
    int pivotNum, pivotElement;
    int i = startlist - 1;
    int j = startlist;

    srand((unsigned int)time(0));
    pivotNum = rand() % (endlist-startlist + 1) + startlist;
    pivotElement = StuID_Num( listStudent->studentData[pivotNum].studentID);

    SwapStuElement(&listStudent->studentData[pivotNum], &listStudent->studentData[endlist]);

    while (j < endlist)
    {
        if (StuID_Num( listStudent->studentData[j].studentID )< pivotElement)
        {
            i++;
            SwapStuElement(&listStudent->studentData[j], &listStudent->studentData[i]);
        }

        j++;
    }

    SwapStuElement(&listStudent->studentData[endlist], &listStudent->studentData[i+1]);
    return i + 1;

}

void SwapStuElement(Student * StuDataA, Student * StuDataB)
{
    Student temp;


    temp = *StuDataA;
    *StuDataA = *StuDataB;
    *StuDataB = temp;
    
}

    
//————————————————————————————————————————————————————



//将成绩列表进行排序（采用随机化快速排序（Quicksort）算法）
//————————————————————————————————————————————————————

void SortScoreList(Scorelist* listScore, int startlist, int endlist)
{
    int newListBorder;
    if (startlist < endlist)
    {
        newListBorder = PartitionScore(listScore, startlist, endlist - 1);
        SortScoreList(listScore, startlist, newListBorder);
        SortScoreList(listScore, newListBorder + 1, endlist);
    }
    
    return;
 
}

int PartitionScore(Scorelist* listScore, int startlist, int endlist)
{
    int pivotNum;
    float pivotElement;
    int i = startlist - 1;
    int j = startlist;

    srand((unsigned int)time(0));
    pivotNum = rand() % (endlist - startlist + 1) + startlist;
    pivotElement = listScore->StuScoreData[pivotNum].weightAverage;

    SwapScoreElement(&listScore->StuScoreData[pivotNum], &listScore->StuScoreData[endlist]);

    while (j < endlist)
    {
        if (listScore->StuScoreData[j].weightAverage > pivotElement)
        {
            i++;
            SwapScoreElement(&listScore->StuScoreData[j], &listScore->StuScoreData[i]);
        }

        j++;
    }

    SwapScoreElement(&listScore->StuScoreData[i + 1], &listScore->StuScoreData[endlist]);
    return i + 1;

}

void SwapScoreElement(StuScore* ScoreDataA, StuScore* ScoreDataB)
{
    StuScore temp;

    temp = *ScoreDataA;
    *ScoreDataA = *ScoreDataB;
    *ScoreDataB = temp;

}
//————————————————————————————————————————————————————


//将课程列表进行排序（采用冒泡排序算法）
//————————————————————————————————————————————————————

void SortCourseList(CourseList* listCourse)
{
    int i;
    int j;

    for (i = 0; i < listCourse->lengthCourse-1; i++)
    {
        for (j = 0; j < listCourse->lengthCourse-i-1; j++)
        {
            if (CourseNumCopmare(listCourse->CourseListData[j].couresID, listCourse->CourseListData[j+1].couresID)==1)
            {
                SwapCourseElement(&listCourse->CourseListData[j], &listCourse->CourseListData[j+1]);
            }
        }
    }
}

int CourseNumCopmare(const char* ClassID_A, const char* ClassID_B)
{
    int i;

    for (i = 0; i < CLASS_ID_MAXLEN; i++)
    {
        if (ClassID_A[i] > ClassID_B[i])
        {
            return 1;
        }
        if (ClassID_A[i] < ClassID_B[i])
        {
            return -1;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

void SwapCourseElement(Course* CourseDataA, Course* CourseDataB)
{
    Course temp;

    temp = *CourseDataA;
    *CourseDataA = *CourseDataB;
    *CourseDataB = temp;
}
//————————————————————————————————————————————————————

//增添元素相关函数
//———————————————————————————————————————————————————
void InputStuData(Student* Input)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                    >学生姓名<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->studentName);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >学生ID<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->studentID);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >学生性别<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->studentGender);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >学生年龄<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%d", &Input->studentAge);
    while (getchar() != '\n');
    system("cls");
}

void StuListInsert(StuList* listStudent, Student* insertData)
{
    Student* newDataBase;

    if (++ (listStudent->lengthStu) >= listStudent->listSizeStu)
    {
        newDataBase = (Student*)realloc(listStudent->studentData, (listStudent->listSizeStu + LIST_INCREASE) * sizeof(Student));

        if (newDataBase == NULL)
        {
            ErrorMemoryMenu();
        }
        else
        {
            listStudent->studentData = newDataBase;
            listStudent->listSizeStu += LIST_INCREASE;
        }
    }

    listStudent->studentData[listStudent->lengthStu - 1] = *insertData;
    
}

int StuReplaceSearch(const StuList* listStudent,const char* studentID)
{
    int i;

    for (i = 0; i < listStudent->lengthStu; i++)
    {
        if (strcmp(listStudent->studentData[i].studentID,studentID) == 0)
        {
            return i;
        }
        

    }

    return -1;
}

void StuListReplace(StuList* listStudent, Student* replaceData, const int replaceNum)
{
    listStudent->studentData[replaceNum] = *replaceData;
}

void InputCourseData(Course* Input)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下课程信息*\n\n");
    printf("\n\t\t                                     >课程名<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->couresName);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下课程信息*\n\n");
    printf("\n\t\t                                     >课程ID<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->couresID);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下课程信息*\n\n");
    printf("\n\t\t                                     >课程学分<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &Input->credit);
    system("cls");


    while (getchar() != '\n');
    system("cls");
}

void CourseListInsert(CourseList* listCourse, Course* insertData, const Scorelist* listScore)
{
    Course* newDataBase;

    if (++ (listCourse->lengthCourse) >= listCourse->listSizeCourse && (listCourse->listSizeCourse + LIST_INCREASE)<INT_MAX)
    {
        newDataBase = (Course*)realloc(listCourse->CourseListData, (listCourse->listSizeCourse + LIST_INCREASE) * sizeof(Course));

        if (newDataBase == NULL)
        {
            exit(OVERFLOW);
        }
        else
        {
            listCourse->CourseListData = newDataBase;
            listCourse->listSizeCourse += LIST_INCREASE;

        }

    }


    listCourse->CourseListData[listCourse->lengthCourse - 1] = *insertData;
    if (listCourse->lengthCourse > 1)
    {
       /* listCourse->CourseListData[listCourse->lengthCourse - 1].scorelistLocation =
            listCourse->CourseListData[listCourse->lengthCourse - 2].scorelistLocation + 1;*/
        //listCourse->CourseListData[listCourse->lengthCourse - 1].scorelistLocation =
        //    lastCourseNum;

        listCourse->CourseListData[listCourse->lengthCourse - 1].scorelistLocation = 
            ScanVoidScoreLocation(listScore, listCourse);
    }
    else
    {
        listCourse->CourseListData[listCourse->lengthCourse - 1].scorelistLocation = 0;
    }

}
int ScanVoidScoreLocation(const Scorelist* listScore,const CourseList* listCourse)
{
    int i, j;

    for (i = 0; i < MAX_SCORE_DATA; i++)
    {

        if (SearchSameLocation(listCourse, i) == 1)
        {
            continue;
        }
        
        for (j = 0; j < listScore->lengthScore; j++)
        {
            if (listScore->StuScoreData[j].score[i]>=0)
            {
                break;
            }


        }

        if (j < listScore->lengthScore)
        {
            continue;
        }
        else
        {
            return i;
        }
    }

    return -1;
}

int SearchSameLocation(const CourseList* listCourse, int target)
{
    int i;
    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        if (listCourse->CourseListData[i].scorelistLocation == target)
        {
            return 1;
        }
    }

    return 0;
}

int CourseReplaceSearch(const CourseList* listCourse,const char* Input)
{
    int i;

    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        if (strcmp(listCourse->CourseListData[i].couresID, Input) == 0)
        {
            return i;
        }
    }

    return -1;
}

void StuCourseListInsert(StuCourseList* listStuCourse, StuCourse* insertData)
{
    StuCourse* newDataBase;

    if (++(listStuCourse->lengthStuCourse) >= listStuCourse->listSizeStuCourse)
    {
        newDataBase = (StuCourse*)realloc(listStuCourse->StuCourseData, (listStuCourse->listSizeStuCourse + LIST_INCREASE) * sizeof(StuCourse));

        if (newDataBase == NULL)
        {
            ErrorMemoryMenu();
        }
        else
        {
            listStuCourse->StuCourseData = newDataBase;
            listStuCourse->listSizeStuCourse += LIST_INCREASE;
        }
    }

    listStuCourse->StuCourseData[listStuCourse->lengthStuCourse - 1] = *insertData;

    return;

}

void CourselistReplace(CourseList* listCourse, Course* replaceData,Scorelist*listScore, const int replace)
{
    int i;
    replaceData->scorelistLocation = listCourse->CourseListData[replace].scorelistLocation;
    listCourse->CourseListData[replace] = *replaceData;

    for (i = 0; i < listScore->lengthScore; i++)
    {
        if (listScore->StuScoreData[i].score[replaceData->scorelistLocation] >= 0)
        {
            float totalCredit = 0;

            listScore->StuScoreData[i].weightAverage = CalculateAverage(listScore->StuScoreData[i].score, listCourse, &totalCredit);
            listScore->StuScoreData[i].creditTotal = totalCredit;
        }
    }

}

int InputStuCourseData(StuCourse* Input, CourseList* listCourse, StuList* listStudent)
{

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >学生ID<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->studentID);
    system("cls");

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >已选课程ID<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input->couresID);
    system("cls");

    if (CourseReplaceSearch(listCourse, Input->couresID) ==-1 || StuReplaceSearch(listStudent, Input->studentID)==-1)
    {
        InputStuCourseFailure();
        system("pause");
        return 0;
    }

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                            *请输入添加的以下学生信息*\n\n");
    printf("\n\t\t                                     >课程成绩<\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("_>_____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &Input->score);
    system("cls");
    while (getchar() != '\n');

    if (!(Input->score == - 1 || (Input->score <= 120 && Input->score >= 0)))
    {
        InputStuCourseFailure();
        return 0;
    }
    system("cls");

    return 1;
}

int StuCourseReplaceSearch(StuCourseList* listStuCourse, const char* StuID, const char* ClassID)
{
    int i;

    for (i = 0; i < listStuCourse->lengthStuCourse; i++)
    {
        if (strcmp(listStuCourse->StuCourseData[i].studentID, StuID) == 0 &&
            strcmp(listStuCourse->StuCourseData[i].couresID, ClassID) == 0)
        {
            return i;
        }
    }

    return -1;
}

void StuCourseListReplace(StuCourseList* listStuCourse, StuCourse* replaceData, const int replaceNum)
{
    listStuCourse->StuCourseData[replaceNum] = *replaceData;
}

void InsertScoreListStu(Scorelist* listScore, Student* newStudentData)
{
    StuScore* newDataBase;
    
    if (++(listScore->lengthScore) >= listScore->listSizeScore)
    {
        newDataBase = (StuScore*)realloc(listScore->StuScoreData, (listScore->lengthScore + LIST_INCREASE) * sizeof(StuScore));

        if (newDataBase = NULL)
        {
            ErrorMemoryMenu();
        }
        else
        {
            listScore->StuScoreData = newDataBase;
            listScore->listSizeScore += LIST_INCREASE;
        }

    }
    if (listScore->StuScoreData != NULL)
    {   
        strcpy(listScore->StuScoreData[listScore->lengthScore - 1].studentID, newStudentData->studentID);
        strcpy(listScore->StuScoreData[listScore->lengthScore - 1].studentName, newStudentData->studentName);
        listScore->StuScoreData[listScore->lengthScore - 1].creditTotal = listScore->StuScoreData[listScore->lengthScore - 1].weightAverage = 0;
    }


    return;

}

void ScoreListReplaceName(Scorelist* listScore, Student* newStudentData)
{
    int i;
    for (i = 0; i < listScore->lengthScore; i++)
    {
        if (strcmp(listScore->StuScoreData[i].studentID, newStudentData->studentID) == 0)
        {
            strcpy(listScore->StuScoreData[i].studentName, newStudentData->studentName);
            return;
        }
    }
}

void InsertScoreListScore(Scorelist* listScore, CourseList* listCourse,StuCourse* newScoreData)
{
    int i;
    float totalCredit=0;

    for (i = 0; i < listScore->lengthScore; i++)
    {
        if (strcmp(newScoreData->studentID, listScore->StuScoreData[i].studentID) == 0)
        {
            listScore->StuScoreData[i].score[GetClassLoaction(newScoreData->couresID, listCourse)] = newScoreData->score;

            listScore->StuScoreData[i].weightAverage= CalculateAverage(listScore->StuScoreData[i].score, listCourse, &totalCredit);
            listScore->StuScoreData[i].creditTotal = totalCredit;

            return;

        }
       
    }


}

//删除相关函数
//————————————————————————————————————————————————————
void DeleteStu(StuList* listStudent, StuCourseList* listStuCourse, Scorelist* listScore, const int targetNum)
{
    Student* ptrStu;
    Student* ptrEndStu = &listStudent->studentData[listStudent->lengthStu - 1];

    StuDeleteStuCourse(listStuCourse,listStudent->studentData[targetNum].studentID);
    StuDeleteScore(listScore, listStudent->studentData[targetNum].studentID);

    for(ptrStu = &listStudent->studentData[targetNum + 1];ptrStu<=ptrEndStu;ptrStu++)
    {
        *(ptrStu - 1) = *(ptrStu);
    }
    listStudent->lengthStu--;

    return;

}

void StuDeleteStuCourse(StuCourseList* listStudentCourse, const char* Input)
{
    int i;

    for (i = 0; i < listStudentCourse->lengthStuCourse; i++)
    {
        if (strcmp(listStudentCourse->StuCourseData[i].studentID, Input) == 0)
        {
                DeleteStuCourseElement(listStudentCourse, i);
                i--;
        }
    }
}



void StuDeleteScore(Scorelist* listScore, const char* Input)
{
    int i;
    for (i = 0; i < listScore->lengthScore; i++)
    {
        if (strcmp(listScore->StuScoreData[i].studentID, Input)==0)
        {
            StuScore* ptrStuScore;
            StuScore* ptrEndStuScore = &listScore->StuScoreData[listScore->lengthScore - 1];

            for (ptrStuScore = &listScore->StuScoreData[i+1]; ptrStuScore <= ptrEndStuScore; ptrStuScore++)
            {
                *(ptrStuScore - 1) = *(ptrStuScore);
            }
            listScore->lengthScore--;

            return;
        }
    }
}

void DeleteStuName(StuList* listStudent, StuCourseList* listStuCourse, Scorelist* listScore)
{    
    int i;
    char Input[25];
    int searchNum=0;


    SearchInputStudentName(Input);

    for (i = 0;i < listStudent->lengthStu; i++)
    {
        if (strstr(listStudent->studentData[i].studentName,Input)!=NULL)
        {
            searchNum++;
            PrintSearchStu(listStudent, i);
            if (tolower(AskDelete()) == 'y')
            {
                DeleteStu(listStudent, listStuCourse, listScore,i);
                i--;
            }
            else
            {
                continue;
            }
        }
    }

    if (searchNum == 0)
    {
        SearchFailure();

    }
}

void DeleteCourse(CourseList* listCourse, const int targetNum)
{
    Course* ptrCourse;
    Course* ptrEndCourse = &listCourse->CourseListData[listCourse->lengthCourse-1];

    for (ptrCourse = &listCourse->CourseListData[targetNum+1]; ptrCourse <= ptrEndCourse; ptrCourse++)
    {
        *(ptrCourse - 1) = *(ptrCourse);
    }
    listCourse->lengthCourse--;
}

void DeleteCourseName(CourseList* listCourse)
{
    int i;
    char Input[25];
    int searchNum = 0;


    SearchInputCourseName(Input);

    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        if (strstr(listCourse->CourseListData[i].couresName, Input) != NULL)
        {
            searchNum++;
            PrintSearchCourse(listCourse, i);
            if (tolower(AskDelete()) == 'y')
            {
                DeleteCourse(listCourse, i);
                i--;
            }
            else
            {
                continue;
            }
        }
    }

    if (searchNum == 0)
    {
        SearchFailure();

    }
}



void DeleteStuCourse(StuCourseList* listStudentCourse,const CourseList* listCourse,const StuList* listStudent)
{
    int i;
    char Input[25];
    int searchNum = 0;

    SearchInputStudentID(Input);

    for (i = 0; i < listStudentCourse->lengthStuCourse; i++)
    {
        if (strcmp(listStudentCourse->StuCourseData[i].studentID, Input)==0)
        {
            searchNum++;
            PrintStuCourse(listStudentCourse, listCourse, listStudent,i);
            if (tolower(AskDelete()) == 'y')
            {
                DeleteStuCourseElement(listStudentCourse, i);
                i--;

                
            }
        }
    }
    if (searchNum == 0)
    {
        SearchFailure();

    }
    
}

void DeleteStuCourseElement(StuCourseList*listStuCourse, const int targetNum)
{
    StuCourse* ptrStuCourse=NULL ;
    StuCourse* ptrEndStuCourse = &listStuCourse->StuCourseData[listStuCourse->lengthStuCourse - 1];

    for (ptrStuCourse = &listStuCourse->StuCourseData[targetNum+1]; ptrStuCourse <= ptrEndStuCourse; ptrStuCourse++)
    {
        *(ptrStuCourse - 1) = *(ptrStuCourse);
    }
    listStuCourse->lengthStuCourse--;

}

void PrintStuCourse(const StuCourseList* listStuCourse,const CourseList* listCourse,const StuList* listStudent,const int searchNum )
{
    
    int i = StuReplaceSearch(listStudent, listStuCourse->StuCourseData[searchNum].studentID);
    int j = CourseReplaceSearch(listCourse, listStuCourse->StuCourseData[searchNum].couresID);

    system("cls");
    printf("\n\n\n\n\n");
    printf("\t\t为您查到该关键字的以下数据：\n\n");
    printf("\t\t\t                            *学生选课信息列表*\n\n");
    PrintLine();
    printf("\t\t  学号\t        姓名\t           课程号\t    课程名   \t\t     成绩\n");
    PrintLine();
    printf("\t\t%08s\t%-20s%-10s     %-25s %3.1f\n\n", listStuCourse->StuCourseData[searchNum].studentID,listStudent->studentData[i].studentName,listStuCourse->StuCourseData[searchNum].couresID,
        listCourse->CourseListData[j].couresName,listStuCourse->StuCourseData[searchNum].score);
    PrintLine();
    system("pause");
    system("cls");
}
//查询相关函数
//————————————————————————————————————————————————————
char* SearchInputStudentID(char* Input)
{


    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                           *请输入需要查找学生的学号*\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入："); 
    printf("______________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input);
    system("cls");

    return Input;
}

char* SearchInputStudentName(char* Input)
{

    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                           *请输入需要查找学生的姓名*\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("______________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input);
    system("cls");

    return Input;
}

char* SearchInputCourseID(char* Input)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                           *请输入需要查找课程的课程ID*\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("______________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input);
    system("cls");

    return Input;
}

char* SearchInputCourseName(char* Input)
{
    system("cls");
    printf("\n\n\n\n");
    PrintLine();
    printf("\t\t                                        [->]\n\n");
    printf("\n\t\t                           *请输入需要查找课程的课程名*\n\n");
    PrintLine();
    printf("\t\t\t\t       在此键入：");
    printf("______________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    gets(Input);
    system("cls");

    return Input;
}

int SearchStudentID(const StuList* listStudent,const char* target)
{
    int maxRange, minRange, middle;
    int targetNum = StuID_Num(target);

    minRange = 0;
    maxRange = listStudent->lengthStu - 1;

    while (maxRange>=minRange)
    {
        middle = (maxRange + minRange) / 2;
        
        if (targetNum == StuID_Num(listStudent->studentData[middle].studentID))
        {
            return  middle;
        }
        else if (targetNum > StuID_Num(listStudent->studentData[middle].studentID))
        {
            minRange = middle + 1;
        }
        else
        {
            maxRange = middle - 1;
        }

        
    }

    return -1;

}

int SearchStudentName(const StuList* listStudent,const char* Name)
{
    int i;
    int searchNum=0;

    for (i = 0; i < listStudent->lengthStu; i++)
    {
        if (strstr(listStudent->studentData[i].studentName,Name))
        {
            PrintSearchStu(listStudent, i);
            searchNum++;
        }

    }

    if (searchNum == 0)
    {
        SearchFailure();

    }

    return searchNum;
    
    
    

}

void SearchCourseName(const CourseList* listCourse, const char* Name)
{
    int i;
    int searchNum = 0;

    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        if (strstr(listCourse->CourseListData[i].couresName, Name))
        {
            PrintSearchCourse(listCourse, i);
            searchNum++;
        }

    }

    if (searchNum == 0)
    {
        SearchFailure();

    }



    system("cls");
    return;
}

int SearchCourseID(const CourseList* listCourse, const char* target)
{
    int maxRange, minRange, middle;


    minRange = 0;
    maxRange = listCourse->lengthCourse - 1;

    while (maxRange >= minRange)
    {
        middle = (maxRange + minRange) / 2;

        if (CourseNumCopmare(target,listCourse->CourseListData[middle].couresID)==0)
        {
            return  middle;
        }
        else if (CourseNumCopmare(target,listCourse->CourseListData[middle].couresID)==1)
        {
            minRange = middle  + 1;
        }
        else
        {
            maxRange = middle - 1;
        }


    }

    return -1;

}

void SearachScoreStudentID(const Scorelist* listScore, const CourseList* listCourse, const StuCourseList* listStuCourse, const char* studentID)
{
    int i, j;
    int search;
    int searchNum = 0;

    printf("\n\n\n\n\n");
    printf("\t\t为您查到该关键字的以下数据：\n\n");
 
    
    
    for (i = 0; i < listScore->lengthScore;i++ )
    {
        if (strcmp(studentID,listScore->StuScoreData[i].studentID)==0)
        {
            printf("\t\t%s-%s\n", studentID, listScore->StuScoreData[i].studentName);
            PrintLine();
            printf("\t\t\t课程                       课程号        成绩\n");
            PrintLine();
            searchNum++;

            for (j = 0; j < MAX_SCORE_DATA; j++)
            {
                if (listScore->StuScoreData[i].score[j] >=0)
                {
                    if ((search=SearchCourseScoreLocation(listCourse, j)) != -1)
                    {
                        printf("\t\t\t%-20s\t     %-10s\t%3.2f\n", listCourse->CourseListData[search].couresName,listCourse->CourseListData[search].couresID, 
                            listScore->StuScoreData[i].score[j]);
                    }

                    else
                    {
                        printf("\t\t\t%-20s\t     %-10s\t%3.2f\n", "<Delete>", "<Delete>",listScore->StuScoreData[i].score[j]);
                    }

                }
            }
            PrintLine();
            printf("\t\t\t总成绩：%3.3f\t总学分：%3.2f\t总排名：%d\n", listScore->StuScoreData[i].weightAverage, listScore->StuScoreData[i].creditTotal,i+1);

        }
    }
    if (searchNum == 0)
    {
        PrintLine();
        printf("\n\n\t\t\t\t\t\t无搜索结果\n\n");
    }
    PrintLine();
    system("pause");
    system("cls");
}

void SearchScoreStudentName(const Scorelist* listScore, const CourseList* listCourse, const StuCourseList* listStuCourse, const char* studentName)
{
    int i, j;
    int search;
    int searchNum=0;




    for (i = 0; i < listScore->lengthScore; i++)
    {


        if (strstr(listScore->StuScoreData[i].studentName,studentName))
        {
            system("cls");
            printf("\n\n\n\n\n");
            printf("\t\t为您查到该关键字的以下数据：\n\n");
            printf("\t\t%s-%s\n", listScore->StuScoreData[i].studentID, listScore->StuScoreData[i].studentName);
            PrintLine();
            printf("\t\t\t课程                       课程号        成绩\n");
            PrintLine();

            searchNum++;

            for (j = 0; j < MAX_SCORE_DATA; j++)
            {
                if (listScore->StuScoreData[i].score[j] >=0)
                {
                    if ((search = SearchCourseScoreLocation(listCourse, j)) != -1)
                    {
                        printf("\t\t\t%-20s\t     %-10s\t%3.2f\n", listCourse->CourseListData[search].couresName, listCourse->CourseListData[search].couresID,
                            listScore->StuScoreData[i].score[j]);
                    }

                    else
                    {
                        printf("\t\t\t%-20s\t     %-10s\t%3.2f\n", "<Delete>", "<Delete>", listScore->StuScoreData[i].score[j]);
                    }

                }
            }
            PrintLine();
            printf("\t\t\t总成绩：%3.3f\t总学分：%3.2f\t总排名：%d\n", listScore->StuScoreData[i].weightAverage, listScore->StuScoreData[i].creditTotal, i+1);
            PrintLine();
            system("pause");
            

        }

    }

    if (searchNum ==  0)
    {
        printf("\n\n\n\n\n");
        PrintLine();
        printf("\n\n\t\t\t\t\t\t无搜索结果\n\n");
        PrintLine();
        system("pause");
    }


    //system("pause");
    system("cls");
}

int SearchCourseScoreLocation(const CourseList* listCourse,const int target)
{
    int maxRange, minRange, middle;


    minRange = 0;
    maxRange = listCourse->lengthCourse - 1;

    while (maxRange >= minRange)
    {
        middle = (maxRange + minRange) / 2;

        if (listCourse->CourseListData[middle].scorelistLocation==target)
        {
            return  middle;
        }
        else if (listCourse->CourseListData[middle].scorelistLocation<target)
        {
            minRange = middle + 1;
        }
        else
        {
            maxRange = middle - 1;
        }


    }

    return -1;

}

void PrintSearchStu(const StuList* liststudent, const int searchNum)
{
    system("cls");



    if (searchNum !=-1)
    {
        printf("\n\n\n\n");
        printf("\t\t已为您找到该关键字相关的信息：\n");
        printf("\t\t\t                            *学生信息列表*\n\n");
        PrintLine();
        printf("\t\t  学号\t\t         姓名\t\t               性别\t       年龄\n");
        PrintLine();
        printf("\t\t%08s\t\t%-20s\t\t%-3s\t\t%-3d\n\n", liststudent->studentData[searchNum].studentID, liststudent->studentData[searchNum].studentName,
            liststudent->studentData[searchNum].studentGender, liststudent->studentData[searchNum].studentAge);
        PrintLine();
        system("pause");
    }
    else
    {   
        SearchFailure();
    }


    system("cls");
    return;

}

void PrintSearchCourse(const CourseList* listCourse, const int searchNum)
{
    system("cls");


    if (searchNum != -1)
    {
        printf("\n\n\n\n");
        printf("\t\t已为您找到该关键字相关的信息：\n");
        printf("\t\t\t                            *课程信息列表*\n\n");
        PrintLine();
        printf("\t\t  课程\t\t\t\t\t课程ID\t\t\t学分\n");
        PrintLine();
        printf("\t\t%-25s\t\t%-10s\t\t%-4.1f\n", listCourse->CourseListData[searchNum].couresName, listCourse->CourseListData[searchNum].couresID,
            listCourse->CourseListData[searchNum].credit);
        PrintLine();
        system("pause");
    }


    else
    {
        SearchFailure();
    }


    system("cls");
    return;

}

void WriteToFileList(const StuList* listStudent, const CourseList* listCourse, const StuCourseList* listStudentCourse)
{
    FILE* ptrStu;
    FILE* ptrCourse;
    FILE* ptrStuCourse;

    if ((ptrStu=fopen("NewStuList.txt","w") ) && (ptrCourse=fopen("NewCourseList.txt", "w")) && (ptrStuCourse = fopen("NewSelectList.txt", "w")))
    {
        WriteStuList(ptrStu, listStudent);
        WriteCourseList(ptrCourse, listCourse);
        WriteStuCourseList(ptrStuCourse, listStudentCourse);

        fclose(ptrStu);
        fclose(ptrCourse);
        fclose(ptrStuCourse);
        OutPutSuccess();

    }
    else
    {
        OutPutFailure();
    }
    


}

void WriteStuList(FILE* ptrStu, const StuList* liststudent)
{
    
    int i;


    for (i = 0; i < liststudent->lengthStu; i++)
    {
        fprintf(ptrStu,"%08s\t\t%-20s\t%-3s\t\t%-3d\n", liststudent->studentData[i].studentID, liststudent->studentData[i].studentName,
            liststudent->studentData[i].studentGender, liststudent->studentData[i].studentAge);
    }


}

void WriteCourseList(FILE* ptrCourse, const CourseList* listCourse)
{
    
    int i;

    for (i = 0; i < listCourse->lengthCourse; i++)
    {
        fprintf(ptrCourse, "%-25s  %-20s   %-4.1f\n", listCourse->CourseListData[i].couresName, listCourse->CourseListData[i].couresID,
            listCourse->CourseListData[i].credit);
    }
}

void WriteStuCourseList(FILE* ptrStuCourse, const StuCourseList* listStuCourse)
{
    int i;

    for (i = 0; i < listStuCourse->lengthStuCourse; i++)
    {
        fprintf(ptrStuCourse, "%-10s\t%-10s\t%2.2f\n", listStuCourse->StuCourseData[i].studentID,listStuCourse->StuCourseData[i].couresID,listStuCourse->StuCourseData[i].score);
    }
    
}

void WriteStuScore(const StuList* listStudent, const CourseList* listCourse, const StuCourseList* listStuCourse, const Scorelist* listScore)
{
    FILE* ptr;
    int i,j,k;
    int search;

    if (ptr = fopen("NewScoreList.txt", "w"))
    {
        
        
        for (i = 0; i < listScore->lengthScore; i++)
        {
            fPrintLine(ptr);
            for (k = 0; k < listStudent->lengthStu; k++)
            {
                if (strcmp(listScore->StuScoreData[i].studentName,listStudent->studentData[k].studentName)==0)
                {
                    fprintf(ptr,"个人成绩单\n\n");
                    fPrintLine(ptr);
                    fprintf(ptr, "%s-%s\n\n", listStudent->studentData[k].studentName, listStudent->studentData[k].studentID);

                    for (j = 0; j < MAX_SCORE_DATA; j++)
                    {
                        if (listScore->StuScoreData[i].score[j] >= 0)
                        {
                            if ((search = SearchCourseScoreLocation(listCourse, j)) != -1)
                            {
                                fprintf(ptr, "%-20s\t     %-10s\t%3.2f\n", listCourse->CourseListData[search].couresName, listCourse->CourseListData[search].couresID,
                                    listScore->StuScoreData[i].score[j]);
                            }
                            else
                            {
                                fprintf(ptr,"%-20s\t     %-10s\t%3.2f\n", "<Delete>", "<Delete>", listScore->StuScoreData[i].score[j]);
                            }
                        }
                    }
                }
            }
            
           
            fPrintLine(ptr);
            fprintf(ptr,"总成绩：%3.3f\t总学分：%3.2f\t总排名：%d\n", listScore->StuScoreData[i].weightAverage, listScore->StuScoreData[i].creditTotal, i + 1);
            fPrintLine(ptr);

            fprintf(ptr, "\n\n\n\n\n");
        }

        fclose(ptr);
        OutPutSuccess();


        
    }
    else
    {
        OutPutFailure();
    }

}

void fPrintLine(FILE* ptr)
{
    fprintf(ptr, "___________________________________________________________________________________\n\n");
}
