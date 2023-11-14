float problemSolution2(float i, float j, float k) {
    float result;
//    (a>b)? "a katta":"b katta"
    (i>j and i>k) ? result=i:result=j;
    (result>k)? :result=k;

    return result;
}