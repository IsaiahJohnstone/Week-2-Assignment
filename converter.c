#include <stdio.h>

/* Conversion constants */
const double C_TO_F_SCALE  = 9.0 / 5.0;
const double C_TO_F_OFFSET = 32.0;
const double MI_TO_KM      = 1.60934;
const double LB_TO_KG      = 0.453592;

void convert_temperature(void);
void convert_distance(void);
void convert_weight(void);
void convert_speed(void);






int main(void) {
    int choice;

    do {
        printf("\n= Unit Conversion Station =\n");
        printf("1. Temperature  (Celsius <-> Fahrenheit)\n");
        printf("2. Distance     (Miles <-> Kilometers)\n");
        printf("3. Weight       (Pounds <-> Kilograms)\n");
        printf("4. Speed        (MPH <-> KPH)\n");
        printf("5. Quit\n");
        printf("Enter Choice(1-5):");
        fscanf(stdin,"%d", &choice);

        switch (choice) {
        case 1: convert_temperature(); break;
        case 2: convert_distance();    break;
        case 3: convert_weight();      break;
        case 4: convert_speed();       break;
        case 5: printf("Goodbye!\n");  break;
        default: printf("Invalid choice. Try again.");
        }


    } while (choice != 5);

    return 0;
}



void convert_temperature(void) {
    int choice;
    float number, final;
    

    do{
        printf("\n--Temperature--\n");
        printf("1. Celsius\n");
        printf("2. Fahrenheit\n");
        printf("Enter Choice(1-2)");
        fscanf(stdin,"%d", &choice);

        switch(choice){
            case 1: printf("Enter the temperature in Celsius:");
            fscanf(stdin,"%f", &number);
            final = number*(C_TO_F_SCALE)+C_TO_F_OFFSET;
            printf("%.2f°C=%.2f°F\n",number,final);

            break;
            case 2: printf("Enter the temperature in Fahrenheit:");
            fscanf(stdin,"%f", &number);
            final = (number-C_TO_F_OFFSET)*(5.0/9.0);
            printf("%.2f°F = %.2f°C\n",number,final);
            break;
            default: printf("Invalid choice. Try again.");


        }
    } while (choice < 1 || choice > 2);
};

void convert_distance(void) {
    int choice;
    float number, final;
    

    do{
        printf("\n--Distance--\n");
        printf("1. Miles\n");
        printf("2. Kilometers\n");
        printf("Enter Choice(1-2)");
        fscanf(stdin,"%d", &choice);
    
        switch(choice){
            case 1: printf("Enter the distance in miles:");
            fscanf(stdin,"%f", &number);
            final = number*MI_TO_KM;
            printf("%.2f miles = %.2f km\n",number,final);

            break;
            case 2: printf("Enter the distance in kilometers:");
            fscanf(stdin,"%f", &number);
            final = number/MI_TO_KM;
            printf("%.2f km = %.2f miles\n",number,final);
            break;
            default: printf("Invalid choice. Try again.");


        }
    } while (choice < 1 || choice > 2);
};

void convert_weight(void) {
    int choice;
    float number, final;
    

    do{
        printf("\n--Weight--\n");
        printf("1. Pounds\n");
        printf("2. Kilograms\n");
        printf("Enter Choice(1-2)");
        fscanf(stdin,"%d", &choice);
    
        switch(choice){
            case 1: printf("Enter the weight in pounds:");
            fscanf(stdin,"%f", &number);
            final = number*LB_TO_KG;
            printf("%2.f lbs = %.2f kg\n",number,final);

            break;
            case 2: printf("Enter the weight in kilograms:");
            fscanf(stdin,"%f", &number);
            final = number/LB_TO_KG;
            printf("%.2f kg = %.2f lbs\n",number,final);
            break;
            default: printf("Invalid choice. Try again.");


        }
    } while (choice < 1 || choice > 2);
};

void convert_speed(void) {
    int choice;
    float number, final;
    

    do{
        printf("\n--Speed--\n");
        printf("1. MPH\n");
        printf("2. KPH\n");
        printf("Enter Choice(1-2)");
        fscanf(stdin,"%d", &choice);

        switch(choice){
            case 1: printf("Enter the speed in MPH:");
            fscanf(stdin,"%f", &number);
            final = number*MI_TO_KM;
            printf("%.2f mph = %.2f kph\n",number,final);

            break;
            case 2: printf("Enter the speed in KPH:");
            fscanf(stdin,"%f", &number);
            final = number/MI_TO_KM;
            printf("%.2f kph = %.2f mph\n",number,final);
            break;
            default: printf("Invalid choice. Try again.");


        }
    } while (choice < 1 || choice > 2);
}

