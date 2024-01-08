#include <stdio.h>

int main()
{
    class Duck{
    public:
        void duck(){
            printf("This is a duck \n");
        }
    };

    class FlyBehavior{
    };
    
    class FlyWithWing:public FlyBehavior{
    public:
        void flywithwing(){
            printf("This duck can fly \n");
        }
    };

    class FlyNoWay: public FlyBehavior{
    public:
        void flynoway(){
            printf("This duck can not fly \n");
        }    
    };


    class QuackBehavior{
    };

    class Quack:public QuackBehavior{
    public:
        void quack(){
            printf("This duck squeaks \n");
        }
    };

    class Squeak{
    public:
        void squeak(){
            printf("This duck squeaks \n");
        }
    };

    class Silence{
    public:
        void silence(){
            printf("This duck can not make sound \n");
        }
    };

    class MallardDuck: public Duck, public Quack, public FlyWithWing{
    };

    MallardDuck duck1;
    duck1.duck();
    duck1.flywithwing();
    duck1.quack();
}