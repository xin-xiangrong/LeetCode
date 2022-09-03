#define _CRT_SECURE_NO_WARNINGS 1
int cmpInt(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    //先给数组排序
    //利用qsort排序
    qsort(nums, numsSize, sizeof(int), cmpInt);
    //冒泡排序
    /*int i = 0;
    int j = 0;
    int flag = 1;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = 0; j < numsSize - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }*/
    int i = 0;
    *returnSize = 2;
    int* rete = (int*)malloc(sizeof(int) * 2);
    //找出错误数字
    int former = 0;//记录当前元素的前一个元素的值
    for (i = 0; i < numsSize; i++)
    {
        //找出和相邻相等的两个元素
        if (nums[i] == former)
        {
            rete[0] = nums[i];
        }
        //找出丢失的数字
        else if (nums[i] - former > 1)
        {
            rete[1] = former + 1;
        }
        former = nums[i];
    }
    //判断末元素是否丢失
    if (nums[numsSize - 1] != numsSize)
    {
        rete[1] = numsSize;
    }
    return rete;
}