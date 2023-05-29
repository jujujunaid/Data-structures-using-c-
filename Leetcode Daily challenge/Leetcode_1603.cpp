class ParkingSystem {
public:
int s,m,b;
    ParkingSystem(int big, int medium, int small) {
        s=small;
        m=medium;
        b=big;
    }
    
    bool addCar(int c) {
       if(c==1 && b==0 ||c==2 && m==0||c==3 && s==0)
        return 0;
        if(c==1)
            b--;
        if(c==2)
            m--;
        if(c==3)
            s--;
        return 1;
    }
};