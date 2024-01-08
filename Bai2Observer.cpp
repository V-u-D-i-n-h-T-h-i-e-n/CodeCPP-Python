#include <stdio.h>

int main()
{
    class ReObserver{
    public:
        char Observerlist[100];
        void RegisterObserver(char observerin){
            for(int i=0;i<100;i++){
                if(Observerlist[i] == NULL){
                    Observerlist[i] = observerin;
                }
                else{
                    printf("No more space for observer: %c \n",observerin);
                }
            }
        }

        void RemoveObserver(char observerout){
            for(int i=0;i<100;i++){
                if(Observerlist[i] = observerout){
                    Observerlist[i] = NULL;
                }
                else{
                    printf("No observer name: %c \n",observerout);
                }
            }
        }
    };

    class WeatherData{
    public:
        float temperature;
        float humidity;
        float pressure;
    };

    class ObserverReceiveData: public WeatherData, public ReObserver{
    public:
        void observerreceivedata(){
            for (int i=0;i<100;i++){
                if(Observerlist[i] != NULL){
                    scanf("%f %f %f",&temperature,&humidity,&pressure);
                    printf("Receive temperature: %f",temperature);
                    printf("Receive humidity: %f",humidity);
                    printf("Receive pressure: %f",pressure);
                }
                else{
                    i=i;
                }
            }
        }
    };

    
}
