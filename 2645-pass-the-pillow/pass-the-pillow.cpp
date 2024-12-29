class Solution {
public:
    struct Pillow{
        bool forward = true;
    };
    int passThePillow(int n, int time) {
        Pillow pillow;
        int person = 1;
        for(int i = 0;i < time;++i){
            if(pillow.forward) person++;
            else person--;

            if(person == n || person == 1) pillow.forward = !pillow.forward;
        }
        return person;
    }
};