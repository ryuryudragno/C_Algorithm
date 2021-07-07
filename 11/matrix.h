// 行列 Matrix の構造体の定義
typedef struct {
    int row;      // 行の数
    int col;      // 列の数
    double *mat;  // 行列の値を保存する領域の先頭のアドレス
} Matrix;

// 行列の領域を確保する関数
Matrix *matalloc(int m, int n);

// 行列の領域を解放する関数
void matfree(Matrix *a);