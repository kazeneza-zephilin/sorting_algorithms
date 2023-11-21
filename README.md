Sorting algorithms projects
===========================
the below content are not actual source code but it helps to understand the concepts much similar to the actual source codes.


### buble sort algorithm pseudocodes
buble_sort(A, n)
	for k <- 1 to n - 1
		flag <- 0
			for i <- 0 to n - k - 1
			if A[i] > A[i + 1]
				swap(A[i], A[i + 1])
				flag <- 1
		if(flag == 0) break


```
for(i = 0, i < n - 1, i++);
{
	flag = 0;
	for (j = 0, j < n -1 -i)
	{
		if(A[j] > A[j + 1])
		{
		temp = A[j];
		A[j] = A [j + 1];
		A[j+1] = temp;
		flag =1;
		}
	}
	if (flag == 0)
		break
}
```


T(n):: O(n^2)
Best case:: O(n)
average case:: O(n^2)
worst case:: O(n^2)

### Insertion sorting

```
for (i = 1, i < n, i++)
{
	temp = a[i];
	j = i -1;
	while (i > 0 && a[j] > temp)
	{
		a[j + 1] = a[j];
		j--;
	}

	a[j + 1] = temp
}
```
T(n) :: 
Best case :: O(n)
average case :: O(n^2)
worst case :: O(n^2)

### selection sort

```
for ( i = 0, i < n - 1), i++)
{
	int min = i;
	for (j = i + 1, j < n, j++)
	{
		if a[j] < a[min]
			min = j;
	}
	if (min != i)
		swap(a[i], a[min]);
}
```
T(n) :: O(n^2)
Best case :: O(n^2)
Average case :: O(n ^2)
Worst case :: O(n ^2)

### Quick sort

```
partion(a, lb, ub)
{
	pivot = a[lb];
	start = lb;
	end = ub;
	while( start < end)
	{
		while(a[start} < = pivot)
		{
			start++;
		}
		while(a[end] > pivot)
		{
			end--;
		}
		if(start < end)
			swap(a[start], a[end])
	}
	swap(a[lb], a[end])
	return end;
}

quick_sort(a, lb, ub)
{
	if(lb < ub)
	{
		loc = partition(a, lb, ub);
		quick_sort(a, lb, loc - 1);
		quick_sort(a, loc + 1, ub);
	}
}
```
T(n) :: O(nlogn)
Best case :: O(nlogn)
Average case :: O(nlogn)
worse case :: O(n^2)


### shell sort


