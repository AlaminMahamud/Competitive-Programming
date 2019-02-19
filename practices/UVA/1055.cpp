#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    int installments, test_case, output, index_to_iterate;
    double down_payment, loan, car_value;
    
    while(scanf("%d %lf %lf %d", &installments, &down_payment, &loan, &test_case) != EOF){
        if(installments < 0) break;
        double depreciation[installments];
        int index[test_case];

        int month_no;
        double depreciation_rate; 
        for(int i = 0; i < test_case; i++){
            scanf("%d %lf", &month_no, &depreciation_rate);
            depreciation[month_no] = depreciation_rate;
            for(int j = month_no; j < installments; j++)
                depreciation[j] = depreciation_rate;
            index[test_case] = i; 
        } 

        for(int i=0 ; i<installments ; i++)
            cout << depreciation[i] << endl;

        // finished input section

        // Algo begin
        output = 1;
        for(int i = 0; i < installments; i++){
            if(i==0){
                car_value = loan + down_payment;
                index_to_iterate = i;
            }
            // if(i == index[test_case]){
            //     index_to_iterate = i;
            // }    
            
            car_value -= (car_value*depreciation[i]);
            loan -= down_payment;

            cout << car_value << "\t" << loan << "\t" <<endl;
            if(loan < car_value)
                break;
            output++;
        }
        if(output==1)
            cout << "1 month" <<endl;
        else if(output > 1)
            cout << output <<" months"<<endl;
    }
    
    return 0;
}