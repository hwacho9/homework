int main()
{
    int n;    
    printf("정수 n을 입력 : ");
    scanf_s("%d", &n);//scanf_s는 scanf의 safe 버전입니다. 
    int* matrix;//동적으로 할당받은 메모리 주소를 기억할 변수     
    printf("행렬입력\n");
    //n*n 행렬의 값을 보관하기 위해 int 형식 크기* n*n 의 메모리 동적 할당 
    matrix = (int*)malloc(sizeof(int) * n * n);
    int row, col;    
    for (row = 0; row < n; row++)//0~n-1 까지 반복(n행) 
    {
        for (col = 0; col < n; col++)//0~n-1 까지 반복(n열) 
        {
            //matrix에서 row*n + col은 row,col의 값을 기억할 메모리 주소 
            scanf_s("%d", matrix + row * n + col);
        }
    }
    int row_sum;//행렬의 하나의 행의 합계를 기억할 변수     
    int* base_sum;//행렬의 각 열의 합계를 기억할 배열     
    printf("행렬의 합과 평균\n");
    //열의 합계를 기억하기 위한 메모리 동적 할당 
    //n*n 행렬이므로 n개의 열 값을 기억할 메모리 크기를 할당함 
    base_sum = (int*)malloc(sizeof(int) * n);
    memset(base_sum, 0, sizeof(int) * n);//할당한 메모리에 값을 0으로 초기화 
    for (row = 0; row < n; row++)//0~n-1 까지 반복(n행) 
    {
        row_sum = 0;
        for (col = 0; col < n; col++)//0~n-1 까지 반복(n열) 
        {
            //행렬의 row, col의 값을 출력 
            printf("%d \t", *(matrix + row * n + col));
            //행의 합계를 구하기 위해 행렬의 row, col의 값을 row_sum에 더함 
            row_sum += *(matrix + row * n + col);
            //열의 합계를 구하기 위해 행렬의 row,col의 값을 base_sum+col 이 가리키는 곳에 더함 
            *(base_sum + col) += *(matrix + row * n + col);
        }
        //행의 합계와 평균을 출력 
        //평균을 실수로 연산하기 위해 나누기 연산의 최소 하나는 실수형이어야 합니다. 
        //이를 위해 n을 double 형식으로 명시적으로 형변환하였습니다. (double)n 
        printf("%d\t %.1lf\n", row_sum, row_sum / (double)n);
        //%.1lf는 소수점 이하 1자리까지 출력하기 위한 포멧 사양입니다. 
    }
    int sum = 0;//행렬의 전체 합계를 기억할 변수, 0으로 초기화    
    for (col = 0; col < n; col++)
    {
        //sum에 행렬의 col행의 합계를 더함 
        sum += *(base_sum + col);
        printf("%d \t", *(base_sum + col));
    }
    printf("%d\t %.1lf\n", sum, sum / (double)n);
 
    double aver_sum=0;//행렬의 열의 평균의 합계를 기억할 변수 ,0으로 초기화 
    for (col = 0; col < n; col++)
    {
        //aver_sum에 각 열의 평균을 더함 
        aver_sum += *(base_sum + col) / 3.0;
        printf("%.1lf\t", *(base_sum + col) / 3.0);
    }
    printf("%.1lf\t %.1lf\n", aver_sum, aver_sum / n);
    return 0;
}