

 
    boolean amicablePair(int a,int b) {
        int s = 0;
        for(int i = 1; i < a; i++) {
            if (a % i == 0) {
              s += i;
            }
        }
        if (s == b) {
            s = 0 ;
            for(int i = 1; i < b; i++) {
                if (b % i == 0) {
                    s += i;
                }
            }
            if (s == a)
              return true;
            else
              return false;
        }
        return false;
    }

}
