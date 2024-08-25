/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */
const t = new Array(1001).fill(0).map(()=> new Array(1001));
var solveFunction = function(x,y,n,m){
    for(let i =0;i<=n;i++){
        for(let j =0;j<=m;j++){
            if(i=== 0 || j===0) t[i][j] =0;
        }
    }

    for(let i=1;i<=n;i++){
        for(let j =1 ; j<= m ;j++){
            if(x[i-1] === y[j-1]){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else {
                t[i][j] = Math.max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[n][m];
}
var longestCommonSubsequence = function(text1, text2) {
    return solveFunction(text1,text2,text1.length,text2.length);
};