// Code to implement the gcf function goes here

int r;

int gcf(int a, int b) {
    if (a > b) {
        r = a % b;

        if (r != 0) {
            a = b;
            b = r;
            gcf(a, b);
        }
        else {
            return b;
        }
    }
    else if (a < b) {
        r = b % a;

        if (r != 0) {
            b = a;
            a = r;
            gcf(b, a);
        }
        else {
            return b;
        }
    }
    else {
        return a;
    }
}