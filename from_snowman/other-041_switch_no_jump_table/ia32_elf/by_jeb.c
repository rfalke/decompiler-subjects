
int do_switch(int param0) {
    int result;
    switch(param0) {
        case 2: {
            return &gvar_8048199;
        }
        case 3: {
            return "three";
        }
        case 4: {
            return "four";
        }
        case 5: {
            return "five";
        }
        case 6: {
            return &gvar_80481AD;
        }
        case 7: {
            return "seven";
        }
        case 8: {
            return "eight";
        }
        case 10: {
            return &gvar_80481C2;
        }
        default: {
            if(param0 <= 2) {
                if(!param0) {
                    result = "zero";
                }
                else if(param0 != 1) {
                    goto loc_8048189;
                }
                else {
                    result = &gvar_8048195;
                }
            }
            else if(param0 <= 5) {
                goto loc_8048189;
            }
            else if(param0 <= 8) {
                goto loc_8048189;
            }
            else if(param0 < 10) {
                result = "nine";
            }
            else if(param0 != 100500) {
            loc_8048189:
                result = "many";
            }
            else {
                result = "stopyatsot";
            }
            return result;
        }
    }
}
