//c_Linked List
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int select,studen_no=0,num=0;
    float Msum=0,Esum=0;
    
    struct student
    {
        char name[20],no[10];
        int Math,Eng;
        struct student *next;
    };
    typedef struct student s_data;
    s_data *ptr;
    s_data *head;
    s_data *new_data;
    
    head=(s_data*) malloc(sizeof(s_data));
    head->next=NULL;
    ptr=head;
    do
    {
        printf("(1)add (2)exit=>\n");
        scanf("%d",&select);
        if(select!=2)
        {
            printf("name,no,Math,Eng\n");
            new_data=(s_data*) malloc(sizeof(s_data));
            scanf("%s %s %d %d",new_data->name,new_data->no,&new_data->Math,&new_data->Eng);
            ptr->next=new_data;
            new_data->next=NULL;
            ptr=ptr->next;
            num++;
        }
    }while(select!=2);
        ptr=head->next;
        putchar('\n');
        while(ptr!=NULL)
        {
            printf("name:%s,no:%s,Math:%d,Eng:%d\n",ptr->name,ptr->no,ptr->Math,ptr->Eng);
            Msum+=ptr->Math;
            Esum+=ptr->Eng;
            studen_no++;
            ptr=ptr->next;
        }
    printf("--------------------\n");
    printf("average Math:%.2f,\naverage Eng:%.2f\n",Msum/studen_no,Esum/studen_no);
    return 0;
}