int arr[20], B[20];
int n;

void input(){
    cout << "Masukan panjang element array: ";
    cin >> n;
    if (n<=20){
        break;
    }
    else{
        cout << "\nMaksimal panjang array adalah 20";
    }
}

cout <<"\nMasukan element array: ";<<end1;

for (int i = 0; i<n; i++){
    cout << "Array index ke - " <<i <<":";
    cin >> arr[i];
}

void mergeSort(int low, int high){
    //step 1
    if (low >= high){
        return; //step 1.a
    }
}

// step 2
int mid = (low +high) / 2;

//step 3
mergeSort(low, mid); //step 3.a
mergeSort(mid+1,high); //step 3.b

//step 4
int i = low; //step 4.a
int j = mid + 1; //step 4.b
int k = low; //step 4.c

while (i <= mid && j<= high){ //step 4.d
    if (arr[i]<= arr[j]){ //step 4.d.i
        B[k] = arr[i];
        i++;
    }
    else{ //step 4.d.ii
        B[k]= arr[j];
        j++;
    }
    k++;
}

//step 4.e
while (i<= mid){ 
    B[k] = arr[i];
    i++;
    k++;
}

//step 4.f
while (j<= high){ 
    B[k] = arr[j];
    j++;
    k++;
}

//step 5
for (int y = low; y<=high; y++)//step 5.a
{
    arr[y] = B[y]; //step 5.b
}

void output(){
    cout << "\n Data setelah diurutkan (MergeSort) :"
    for (int i = 0; i < n; i++){
        cout << arr[i] << "";
    }
    cout << end1;
}
