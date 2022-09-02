#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std:: to_string;

double compute_total_income(double salary, float stocks, float rent) {
    return salary + stocks + rent;
}

double compute_total_expenses(float mortgage, long food){
    return mortgage + food;
}

int main(){
    double income_salary;
    float income_stocks;
    float income_rent; 

    float expenses_mortgage;
    long expenses_food;

    cout << "Salary income: ";
    cin >> income_salary;

    cout << "Stocks income: ";
    cin >> income_stocks;

    cout << "Rent income: ";
    cin >> income_rent;

    cout << "_ _ _ _ _ _ _ _ _ " <<endl;

    cout << "Mortgage expenses: ";
    cin >> expenses_mortgage;

    cout << "Food expenses: ";
    cin >> expenses_food;

    double total_income = compute_total_income (income_salary, income_stocks, income_rent);
    double total_expenses = compute_total_expenses (expenses_mortgage, expenses_food);

    double savings = total_income - total_expenses;

    string message = "Your savings are: " + to_string (savings);

    cout << "***************" << endl;
    cout <<"Savings: " <<savings << endl;
    cout << "***************" << endl;
    return 0;
}