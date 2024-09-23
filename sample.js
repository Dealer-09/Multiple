class MatrixSum {
    constructor(r, c) {
        this.r = r;
        this.c = c;
        this.x = [];
        this.y = [];
        this.z = [];
    }
    input() {
        console.log("Enter elements of the 1st Matrix:");
        for (let i = 0; i < this.r; i++) {
            this.x[i] = [];
            for (let j = 0; j < this.c; j++) {
                this.x[i][j] = parseInt(prompt(Enter element [${i + 1}][${j + 1}] of matrix 1:), 10);
            }
        }
        console.log("Enter elements of the 2nd Matrix:");
        for (let i = 0; i < this.r; i++) {
            this.y[i] = [];
            for (let j = 0; j < this.c; j++) {
                this.y[i][j] = parseInt(prompt(Enter element [${i + 1}][${j + 1}] of matrix 2:), 10);
            }
        }
    }
    calculate() {
             for (let i = 0; i < this.r; i++) {
            this.z[i] = [];
            for (let j = 0; j < this.c; j++) {
                this.z[i][j] = this.x[i][j] + this.y[i][j];
            }
        }
    }
    display() {
         console.log("Output Matrix:");
        for (let i = 0; i < this.r; i++) {
            let row = "";
            for (let j = 0; j < this.c; j++) {
                row += this.z[i][j] + "\t";
            }
            console.log(row);
        }
    }
}
(function() {
    let r = parseInt(prompt("Enter the number of rows of the matrices:"), 10);
    let c = parseInt(prompt("Enter the number of columns of the matrices:"), 10);

    if (r > 0 && c > 0) {
        const obj = new MatrixSum(r, c);
        obj.input();
        obj.calculate();
        obj.display();
    } else {
        console.log("Error: Rows and columns should be greater than 0");
    }
})();
