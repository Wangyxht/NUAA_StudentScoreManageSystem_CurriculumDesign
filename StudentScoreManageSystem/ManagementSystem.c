#include"ScoreManagement.h"

int main(void)
{
    //线性表的定义
    Scorelist ListScore;//成绩表
    StuList ListStudent;//学生个人信息表
    CourseList ListCourse;//课程信息表
    StuCourseList ListStuCourse;//选课信息表
    
    //菜单选择的定义
    char startMenuC;//起始菜单选择
    char mainMenuC;//主菜单选择
    char displayMenuC;//显示信息菜单选择
    char courseDisplayC;//显示课程信息菜单选择
    char stuDisplayC;//显示学生信息输入菜单选择
    char scoreDisplayC;//显示成绩信息菜单选择
    char InsertMenuC;//增添元素菜单选择
    char queryMenuC;//查询菜单选择
    char queryMethodC;//查询方式选择
    char deleteMenuC;//删除元素菜单选择
    char outPutMenuC;//导出记录菜单选择
    char deleteMethodC;//删除查询元素方式菜单选择
    

    int initStatus;
   
    ListScore.StuScoreData = NULL;
    ListCourse.CourseListData = NULL;
    ListStuCourse.StuCourseData = NULL;

    startMenuC =StartMenu();
    if(tolower(startMenuC) =='q')
    {
        printf("\t\t即将退出成绩管理系统\n");
        system("pause");
        exit(EXIT_SUCCESS);
    }

    else
    {
        system("cls");
        initStatus=InitiList(&ListScore,&ListCourse,&ListStuCourse,&ListStudent);
        if(initStatus==0)
        {
            ErrorMemoryMenu();
        }

        while(tolower((mainMenuC =MainMenu()))!='q')
        {
            switch (mainMenuC)
            { 

             //载入默认路径文件信息——————————————————————————————————————————
            case '1':
                system("cls");
                //从.txt文件载入信息。
                LoadFileClassInf(&ListCourse);
                LoadFileStuClassInf(&ListStuCourse);
                LoadFileStuInf(&ListStudent);

                if (CreatScoreList(&ListScore, &ListStudent, &ListStuCourse, &ListCourse))
                {   
                    printf("\n\n\n\n");
                    PrintLine();
                    printf("\t\t          *学生成绩信息表已被创建成功，默认文件中的成绩已经被导入*\n\n");
                    PrintLine();

                    system("pause");
                }

                else
                {
                    printf("\n\n\n\n");
                    PrintLine();
                    printf("\t\t       *学生成绩导入失败，请查询成成绩文件是否存在问题*\n\n");
                    PrintLine();

                    system("pause");

                    system("pause");
                    exit(EXIT_FAILURE);

                }                             
                system("cls");
                break;
            


             //显示信息列表——————————————————————————————————————————
            case '2':
                system("cls");

                while (tolower((displayMenuC = DisplayMenu()))!= 'q' )
                {
                    switch (displayMenuC)
                    {
                     //打印课程信息————————————————————————————————————————————   
                    case '1':

                        system("cls");
                        while (tolower(courseDisplayC=(CourseDisplayChoiceMenu())) != 'q')
                        {

                            
                            switch (courseDisplayC)
                            {
                                CourseList CopyListCourse;
                             //按顺序要求打印——————————————————————————————————
                            case'1':

                                CopyCourseList(&CopyListCourse, &ListCourse);
                                SortCourseList(&CopyListCourse);
                                PrintCourseList(&CopyListCourse);
                                break;
                            
                             //按数据库现有数据打印———————————————————————————————
                            case'2':
                                system("cls");
                                PrintCourseList(&ListCourse);
                                break;
                            
                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }
                        break;
                    
                     //打印学生信息——————————————————————————————————
                    case'2':
                        system("cls");
                        while (tolower(stuDisplayC = StuDisplayChoiceMenu()) != 'q')
                        {
                            StuList CopyListStu;

                            switch (stuDisplayC)
                            {
                             //按顺序要求打印—————————————————————————————————
                            case'1':
                                system("cls");
                                CopyStuList(&CopyListStu, &ListStudent);
                                SortStuList(&CopyListStu, 0, CopyListStu.lengthStu);
                                PrintStudentList(&CopyListStu);

                                break;
                                
                             //按数据库现有数据打印——————————————————————————————
                            case'2':
                                system("cls");
                                PrintStudentList(&ListStudent);

                                break;
                             //————————————————————————————————————————
   
                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }
                        break;
                     //打印成绩信息————————————————————————————————————
                    case'3':
                        system("cls");
                        while (tolower(scoreDisplayC = ScoreDisplayChoiceMenu()) != 'q')
                        {
                            Scorelist CopyListScore;

                            switch (scoreDisplayC)
                            {
                             //按顺序要求打印—————————————————————————————————
                            case'1':
                                system("cls");
                                CopyScore(&CopyListScore, &ListScore);
                                SortScoreList(&CopyListScore, 0, CopyListScore.lengthScore);
                                PrintScoreList(&CopyListScore);
                                break;
                             
                             //按数据库现有数据打印——————————————————————————————
                            case'2':
                                system("cls");
                                PrintScoreList(&ListScore);

                                break;
                                //————————————————————————————————————————

                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }

                        break;
                    default:
                        ErrorInputMenu();
                        break;

                    }

                    system("cls");
                }

                system("cls");
                break;
            
             //输入数据————————————————————————————————————————————  
            case'3':
                system("cls");

                while (tolower(InsertMenuC = InsertMenu()) != 'q')
                {
                    switch (InsertMenuC)
                    {
                        
                        int replace;
                     //输入学生数据
                    case'1':
                        
                        do 
                        {
                            Student InsertStuElement;
                            
                            InputStuData(&InsertStuElement);
                            if ((replace = StuReplaceSearch(&ListStudent, InsertStuElement.studentID))==-1)
                            {
                                StuListInsert(&ListStudent, &InsertStuElement);
                                InsertScoreListStu(&ListScore, &InsertStuElement);
                            }
                            else
                            {   
                                
                                //检测是否重复时，学号作为唯一比较凭证
                                if (ReplaceMenu() == 'y')
                                {
                                    StuListReplace(&ListStudent, &InsertStuElement, replace);
                                    ScoreListReplaceName(&ListScore, &InsertStuElement);
                                    
                                }
                                else
                                {
                                    continue;
                                }
                            }
                            system("cls");
                        } while (tolower(InsertExitMenu()) != 'q');
                        break;
                     //输入课程数据
                    case'2':

                        do
                        {
                            Course InsertCourseElement;

                            InputCourseData(&InsertCourseElement);
                            if (replace=CourseReplaceSearch(&ListCourse, InsertCourseElement.couresID) == -1)
                            {
                                CourseListInsert(&ListCourse,&InsertCourseElement);
                            }
                            else
                            {
                                //检测是否重复时，课程号作为唯一比较凭证
                                if (ReplaceMenu() == 'y')
                                {
                                    CourselistReplace(&ListCourse, &InsertCourseElement, replace);
                                }
                                else
                                {
                                    continue;
                                }
                                system("cls");
                            }
                        } while (tolower(InsertExitMenu()) != 'q');
                        break;
                    //输入选课数据
                    case'3':
                        do
                        {
                            StuCourse InsertStuCourseElement;
                            if (InputStuCourseData(&InsertStuCourseElement, &ListCourse, &ListStudent))
                            {
                                if ((replace = StuCourseReplaceSearch(&ListStuCourse, InsertStuCourseElement.studentID, InsertStuCourseElement.couresID))==-1)
                                {
                                    StuCourseListInsert(&ListStuCourse, &InsertStuCourseElement);
                                    InsertScoreListScore(&ListScore, &ListCourse, &InsertStuCourseElement);
                                }
                                else
                                {
                                    //检测是否重复时，课程号与学生ID作为比较凭证
                                    if (ReplaceMenu() == 'y')
                                    {
                                        StuCourseListReplace(&ListStuCourse, &InsertStuCourseElement, replace);
                                        InsertScoreListScore(&ListScore, &ListCourse, &InsertStuCourseElement);
                                        
                                    }
                                    else
                                    {
                                        continue;
                                    }
                                    system("cls");
                                }
                            }

                        } while (tolower(InsertExitMenu()) != 'q');
                        break;
                    default:

                        ErrorInputMenu();
                        break;
                    }
                }
                
                system("cls");
                break;

             //删除数据 ———————————————————————————————————————————
            case'4':
                system("cls");

                while (tolower(deleteMenuC = DeleteMenu()) != 'q')
                {
                    switch (deleteMenuC)
                    {

                        char Input[25];
                        int search;
                     //删除学生列表中的内容
                    case'1':

                        system("cls");
                        while (tolower(deleteMethodC=QueryStuMethodMenu())!='q')
                        {
                            switch (deleteMethodC)
                            {
                             //按学号查询并且删除
                            case'1':
                                system("cls");
                                SearchInputStudentID(Input);
                                if((search=StuReplaceSearch(&ListStudent, Input))!=-1)
                                {
                                    PrintSearchStu(&ListStudent, search);
                                    if (tolower(AskDelete())=='y')
                                    {
                                        DeleteStu(&ListStudent,&ListStuCourse,&ListScore ,search);
                                        system("cls");
                                    }
                                    else
                                    {
                                        continue;
                                    }
                                }
                                else
                                {
                                    SearchFailure();

                                }
                                system("cls");
                                break;
                            
                             //按姓名查询并删除
                            case'2':
                                system("cls");
                                DeleteStuName(&ListStudent,&ListStuCourse,&ListScore);
                                break;
                            default:
                                ErrorInputMenu();
                                break;
                            }
                            system("cls");
                        }
                        system("cls");

                        break;
                     //删除课程列表中的内容
                    case'2':
                        system("cls");
                        while (tolower(deleteMethodC=QueryCourseMethodMenu())!='q')
                        {
                            switch (deleteMethodC)
                            {
                             //按课程号查询并删除
                            case '1':
                                system("cls");
                                SearchInputCourseID(Input);
                                if ((search = CourseReplaceSearch(&ListCourse, Input)) != -1)
                                {
                                    PrintSearchCourse(&ListCourse, search);
                                    if (tolower(AskDelete()) == 'y')
                                    {
                                        DeleteCourse(&ListCourse, search);
                                        system("cls");
                                    }

                                }
                                else
                                {
                                    SearchFailure();

                                }

                                break;
                            case'2':
                                system("cls");
                                DeleteCourseName(&ListCourse);
                                break;
                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }
                        system("cls");
                        break;

                     //删除选课列表中的内容                   
                    case'3':
                        system("cls");
                        DeleteStuCourse(&ListStuCourse, &ListCourse, &ListStudent);
                        system("cls");
                        break;
                    default:
                        ErrorInputMenu();
                        break;
                    }
                }

                system("cls");
                break;


             //查询记录——————————————————————————————————————————
            case'5':
                system("cls");

                while (tolower(queryMenuC = QueryMenu()) != 'q')
                {

                    system("cls");
                    switch (queryMenuC)
                    {
                        char Input[25];
                        int search;
                        
                     //查询学生列表中的记录———————————————————————————————
                    case'1':

                        system("cls");
                        queryMethodC = 0;
                        
                        while (tolower(queryMethodC = QueryStuMethodMenu()) != 'q')
                        {
                            StuList CopyListStu;
                            switch (queryMethodC)
                            {
                            case '1':
                                
                                SearchInputStudentID(Input);
                                CopyStuList(&CopyListStu, &ListStudent);
                                SortStuList(&CopyListStu, 0, CopyListStu.lengthStu);
                                search = SearchStudentID(&CopyListStu, Input);
                                PrintSearchStu(&CopyListStu, search);
                                
                                break;

                            case '2':
                                SearchInputStudentName(Input);
                                SearchStudentName(&ListStudent, Input);
                               
                                break;

                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }

                        system("cls");                        
                        break;
                     
                     //查询课程列表中的记录——————————————————————————————————————
                    case'2':

                        system("cls");
                        queryMethodC = 0;

                        while (tolower(queryMethodC = QueryCourseMethodMenu()) != 'q')
                        {
                            char Input[25];
                            int search;
                            
                            switch (queryMethodC)
                            {
                                CourseList CopyListCourse;
                            case'1':
                                SearchInputCourseID(Input);
                                CopyCourseList(&CopyListCourse, &ListCourse);
                                SortCourseList(&CopyListCourse);
                                search=SearchCourseID(&CopyListCourse, Input);
                                PrintSearchCourse(&CopyListCourse, search);
                                break;

                            case'2':
                                SearchInputCourseName(Input);
                                SearchCourseName(&ListCourse, Input);
                                break;

                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }

                        system("cls");
                        break;
                    
                     //查询成绩单中的记录
                    case'3':
                        system("cls");
                        queryMethodC = 0;

                        while (tolower(queryMethodC = QueryStuMethodMenu()) != 'q')
                        {
                            Scorelist CopyListScore;

                            switch (queryMethodC)
                            {
                            case '1':

                                SearchInputStudentID(Input);
                                CopyScore(&CopyListScore, &ListScore);
                                SortScoreList(&CopyListScore,0,CopyListScore.lengthScore);
                                SearachScoreStudentID(&CopyListScore, &ListCourse, &ListStuCourse, Input);

                                break;

                            case '2':
                                SearchInputStudentName(Input);
                                CopyScore(&CopyListScore, &ListScore);
                                SortScoreList(&CopyListScore, 0, CopyListScore.lengthScore);
                                SearchScoreStudentName(&CopyListScore, &ListCourse, &ListStuCourse, Input);
                               
                                break;
                                
                            default:
                                ErrorInputMenu();
                                break;
                            }
                        }

                        system("cls");
                        break;

                    default:
                        ErrorInputMenu();
                        break;
                    }
                }
                
                system("cls");
                break;
             //导出记录——————————————————————————————————————————
            case'6':
                system("cls");
                
                while (tolower(outPutMenuC= WriteToFileMenu())!='q')
                {
                    switch (outPutMenuC)
                    {

                        Scorelist CopyListScore;
                    
                    case'1':
                        system("cls");
                        WriteToFileList(&ListStudent, &ListCourse, &ListStuCourse);
                        system("cls");
                        break;


                    case'2':
                        system("cls");
                        CopyScore(&CopyListScore, &ListScore);
                        SortScoreList(&CopyListScore, 0, CopyListScore.lengthScore);
                        WriteStuScore(&ListStudent, &ListCourse, &ListStuCourse, &CopyListScore);
                        system("cls");
                        break;
                    default:
                        ErrorInputMenu();
                        break;
                    }                
                }
                system("cls");
                break;
            default:
                ErrorInputMenu();
                break;
            }
        }
    

    } 

  return 0;  

}


