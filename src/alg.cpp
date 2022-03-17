// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int z = 0, o = 0, l = size - 1;
while (o < l) {
int u = (o + l) / 2;
if (arr[u] == value) {
z++;
int y = u;
while (arr[--u] == value) {
z++;
}
while (arr[++y] == value) {
z++;
}
return z;
} else if (arr[u] > value) {
l = u;
} else {
o = u + 1;
}
}
return 0;
}

