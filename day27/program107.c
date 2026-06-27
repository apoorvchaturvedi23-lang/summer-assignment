#include <stdio.h>

int main() {
    int empId;
    char empName[50];
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    printf("===== Employee Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Salary Calculations
    hra = basicSalary * 0.20;   // 20% HRA
    da  = basicSalary * 0.10;   // 10% DA
    pf  = basicSalary * 0.08;   // 8% PF

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    printf("\n========== Salary Slip ==========\n");
    printf("Employee ID      : %d\n", empId);
    printf("Employee Name    : %s\n", empName);
    printf("Basic Salary     : %.2f\n", basicSalary);
    printf("HRA (20%%)        : %.2f\n", hra);
    printf("DA (10%%)         : %.2f\n", da);
    printf("PF (8%%)          : %.2f\n", pf);
    printf("Gross Salary     : %.2f\n", grossSalary);
    printf("Net Salary       : %.2f\n", netSalary);
    printf("=================================\n");

    return 0;
}