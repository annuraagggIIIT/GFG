<h2><a href="https://practice.geeksforgeeks.org/problems/stuffs-division5735/1?page=1&difficulty[]=-1&category[]=Mathematical&sortBy=difficulty">Stuffs Division</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Your are given<strong> N</strong> students with some goodies to be distrubuted among them such that student at i<sup>th</sup> index gets exactly <strong>i</strong> amount of goodies (considering no wastage). The goodies has already been distributed by some other. Your task is to check if it can be redistributed such that student at i<sup>th</sup> index gets <strong>i</strong> amount of goodies. </span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
Arr = {7, 4, 1, 1, 2}
<strong>Output:</strong>
YES
<strong>Explanation:
</strong>Since, all the goods can be
redistributed as 1 2 3 4 5 
(i<sup>th</sup> students get i number of 
goodies).So, output is YES.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
Arr = {1, 1, 1, 1, 1}
<strong>Output:</strong>
NO</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>leftIndex()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns &nbsp;<strong>true</strong> if we can redistribute in the requried way, otherwise <strong>false</strong> .</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>7</sup><br>
0 &lt;= A<sub>i</sub> &lt;= 10<sup>18</sup></span></p>

<p>&nbsp;</p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;