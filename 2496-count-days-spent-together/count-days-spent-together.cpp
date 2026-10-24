class Solution {
public:
    int date_calc(string x){
        int date = (x[3] - '0') * 10 + (x[4] - '0');
        return date;
    }
    int month_calc(string x){
        int month = (x[0] - '0') * 10 + (x[1] - '0');
        return month;
    }
    int days_passed(int x){
        int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = 0;
        for(int i = 0;i < x - 1;i++){
            days += day[i];
        }
        
        return days;
    }
    int date_idx(int date,int days){
        int idx = date + days;
        return idx;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int A_st = date_idx(date_calc(arriveAlice),days_passed(month_calc(arriveAlice)));
        int A_end = date_idx(date_calc(leaveAlice),days_passed(month_calc(leaveAlice)));
        int B_st = date_idx(date_calc(arriveBob),days_passed(month_calc(arriveBob)));
        int B_end = date_idx(date_calc(leaveBob),days_passed(month_calc(leaveBob)));


        return max(0,min(A_end,B_end) - max(A_st,B_st) + 1);
        
    }
};