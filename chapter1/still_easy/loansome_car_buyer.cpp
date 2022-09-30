/*
 * UVa 10114 - Loansome Car Buyer
 * author: uncoded
 */

 #include <cstdio>

 const double EPS = 1e-9;

 int main() {

    int months, depreciations;
    double down_payment, loan, depreciation_values[110];

    while (1) {
        scanf("%d %lf %lf %d", &months, &down_payment, &loan, &depreciations);

        if (months < 0) 
            break;

        while (depreciations--) {
            int month;
            double depreciation;
            scanf("%d %lf", &month, &depreciation);
            for (int i = month; i < 101; ++i)
                depreciation_values[i] = 1 - depreciation;
        }

        double monthly_payment = loan / months;
        double car_value = (down_payment + loan) * depreciation_values[0];
        int i = 0;
        while (loan - car_value > EPS) {
            car_value = car_value * depreciation_values[++i];
            loan -= monthly_payment;
        }

        printf("%d %s\n", i, i == 1 ? "month" : "months");
    }

    return 0;

 }
