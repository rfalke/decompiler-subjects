
int do_switch(unsigned int param0) {
    int result;
    unsigned int v0 = param0;
    if(v0 == 5) {
        result = "five";
    }
    else if((int)v0 <= 5) {
        if(v0 == 2) {
            result = &gvar_8048199;
        }
        else if((int)v0 <= 2) {
            if(!v0) {
                result = "zero";
            }
            else if(v0 != 1) {
                goto loc_8048189;
            }
            else {
                result = &gvar_8048195;
            }
        }
        else if(v0 == 3) {
            result = "three";
        }
        else if(v0 != 4) {
            goto loc_8048189;
        }
        else {
            result = "four";
        }
    }
    else if(v0 == 8) {
        result = "eight";
    }
    else if((int)v0 <= 8) {
        if(v0 == 6) {
            result = &gvar_80481AD;
        }
        else if(v0 != 7) {
            goto loc_8048189;
        }
        else {
            result = "seven";
        }
    }
    else if(v0 == 10) {
        result = &gvar_80481C2;
    }
    else if((int)v0 < 10) {
        result = "nine";
    }
    else if(v0 != 100500) {
    loc_8048189:
        result = "many";
    }
    else {
        result = "stopyatsot";
    }
    return result;
}
