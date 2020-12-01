second += diff_second;
        if(diff_second >=60){
            minute += 1;
            second -= 60;
        }else if(diff_second < 0){
            minute -= 1;
            second += 60;
        }

        minute += diff_minute;
        if(diff_minute >= 60){
            hour += 1;
            minute -= 60;
        }else if(diff_minute < 0){
            hour -= 1;
            minute += 60;
        }

        hour += diff_hour;
        if(diff_hour >= 24){
            hour -= 24;
        }else if(diff_hour < 0){
            hour += 24;
        }