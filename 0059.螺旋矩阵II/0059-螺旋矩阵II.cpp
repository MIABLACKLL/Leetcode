class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiralmatrix(n);
        for(int i=0;i<n;i++)
            spiralmatrix[i].resize(n);     
        int i=0,j=0,count=1;
        int state=0;
       	int total = n*n;
	    while (count<= total)
	    {
		spiralmatrix[i][j] = count;
		count++;
		switch (state)
		    {
		case 0:	if (j < n - 1 && (spiralmatrix[i][j + 1] == NULL)) j++;
				else { state = 1; i++; } break;
		case 1:	if (i < n - 1 && (spiralmatrix[i + 1][j] == NULL))i++; 
				else { state = 2; j--; } break;
		case 2:if (j > 0 && (spiralmatrix[i][j - 1] == NULL))  j--; 
			   else { state = 3; i--; } break;
		case 3: if (i > 0 && (spiralmatrix[i - 1][j] == NULL))  i--;
				else { state = 0; j++; } break;
		    }
		
	    }
        return spiralmatrix;      
    }
};