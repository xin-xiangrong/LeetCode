#define _CRT_SECURE_NO_WARNINGS 1
int cmpInt(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    //�ȸ���������
    //����qsort����
    qsort(nums, numsSize, sizeof(int), cmpInt);
    //ð������
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
    //�ҳ���������
    int former = 0;//��¼��ǰԪ�ص�ǰһ��Ԫ�ص�ֵ
    for (i = 0; i < numsSize; i++)
    {
        //�ҳ���������ȵ�����Ԫ��
        if (nums[i] == former)
        {
            rete[0] = nums[i];
        }
        //�ҳ���ʧ������
        else if (nums[i] - former > 1)
        {
            rete[1] = former + 1;
        }
        former = nums[i];
    }
    //�ж�ĩԪ���Ƿ�ʧ
    if (nums[numsSize - 1] != numsSize)
    {
        rete[1] = numsSize;
    }
    return rete;
}