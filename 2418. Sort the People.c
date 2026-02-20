char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    int i,j;
    for(i=0;i<namesSize;i++){
        for(j=i+1;j<namesSize;j++){
            if(heights[i]<heights[j]){
                int t=heights[i];
                heights[i]=heights[j];
                heights[j]=t;
                char *h=names[i];
                names[i]=names[j];
                names[j]=h;
            }
        }
    }
    *returnSize=namesSize;
    return names;
}
