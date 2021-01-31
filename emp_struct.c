#include <stdio.h>
 
struct employee{
    char    name[30],deptname[30];
    int     empno;
    float   salary;
};
 
main()
{
    struct employee emp;
    int i;
    for( i=1;i<=20;i++)
	{
	  
	    printf("\nEnter details :\n");
	    printf("Name ?:");          gets(emp.name);
	    printf("Department Name ?:");          gets(emp.deptname);
	    printf("Employee Number ?:");            scanf("%d",&emp.empno);
	    printf("Salary ?:");        scanf("%f",&emp.salary);
	
	    printf("\nEntered detail is:");
	    printf("Name: %s"   ,emp.name);
	    printf("\tDepartment Name: %s"	,emp.deptname);
	    printf("\tEmployee Number: %d"     ,emp.empno);
	    printf("\tSalary: %f\n",emp.salary);
	}

}
