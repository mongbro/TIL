namespace _04
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.TreeNode treeNode29 = new System.Windows.Forms.TreeNode("한국어문학과");
            System.Windows.Forms.TreeNode treeNode30 = new System.Windows.Forms.TreeNode("하워드대학", new System.Windows.Forms.TreeNode[] {
            treeNode29});
            System.Windows.Forms.TreeNode treeNode31 = new System.Windows.Forms.TreeNode("경영학과");
            System.Windows.Forms.TreeNode treeNode32 = new System.Windows.Forms.TreeNode("서재필대학", new System.Windows.Forms.TreeNode[] {
            treeNode31});
            System.Windows.Forms.TreeNode treeNode33 = new System.Windows.Forms.TreeNode("컴퓨터공학과");
            System.Windows.Forms.TreeNode treeNode34 = new System.Windows.Forms.TreeNode("정보통신공학과");
            System.Windows.Forms.TreeNode treeNode35 = new System.Windows.Forms.TreeNode("게임공학과");
            System.Windows.Forms.TreeNode treeNode36 = new System.Windows.Forms.TreeNode("아펜젤러대학", new System.Windows.Forms.TreeNode[] {
            treeNode33,
            treeNode34,
            treeNode35});
            System.Windows.Forms.TreeNode treeNode37 = new System.Windows.Forms.TreeNode("항공운항과");
            System.Windows.Forms.TreeNode treeNode38 = new System.Windows.Forms.TreeNode("조경학과");
            System.Windows.Forms.TreeNode treeNode39 = new System.Windows.Forms.TreeNode("피아노과");
            System.Windows.Forms.TreeNode treeNode40 = new System.Windows.Forms.TreeNode("김소월대학", new System.Windows.Forms.TreeNode[] {
            treeNode37,
            treeNode38,
            treeNode39});
            System.Windows.Forms.TreeNode treeNode41 = new System.Windows.Forms.TreeNode("주시경대학");
            System.Windows.Forms.TreeNode treeNode42 = new System.Windows.Forms.TreeNode("배재대학교", new System.Windows.Forms.TreeNode[] {
            treeNode30,
            treeNode32,
            treeNode36,
            treeNode40,
            treeNode41});
            this.treeView1 = new System.Windows.Forms.TreeView();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // treeView1
            // 
            this.treeView1.Location = new System.Drawing.Point(12, 12);
            this.treeView1.Name = "treeView1";
            treeNode29.Name = "노드6";
            treeNode29.Text = "한국어문학과";
            treeNode30.Name = "노드1";
            treeNode30.Text = "하워드대학";
            treeNode31.Name = "노드7";
            treeNode31.Text = "경영학과";
            treeNode32.Name = "노드2";
            treeNode32.Text = "서재필대학";
            treeNode33.Name = "노드8";
            treeNode33.Text = "컴퓨터공학과";
            treeNode34.Name = "노드9";
            treeNode34.Text = "정보통신공학과";
            treeNode35.Name = "노드10";
            treeNode35.Text = "게임공학과";
            treeNode36.Name = "노드3";
            treeNode36.Text = "아펜젤러대학";
            treeNode37.Name = "노드11";
            treeNode37.Text = "항공운항과";
            treeNode38.Name = "노드12";
            treeNode38.Text = "조경학과";
            treeNode39.Name = "노드13";
            treeNode39.Text = "피아노과";
            treeNode40.Name = "노드4";
            treeNode40.Text = "김소월대학";
            treeNode41.Name = "노드5";
            treeNode41.Text = "주시경대학";
            treeNode42.Name = "노드0";
            treeNode42.Text = "배재대학교";
            this.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[] {
            treeNode42});
            this.treeView1.Size = new System.Drawing.Size(355, 287);
            this.treeView1.TabIndex = 0;
            this.treeView1.AfterSelect += new System.Windows.Forms.TreeViewEventHandler(this.treeView1_AfterSelect);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 319);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(69, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "선택한 노드";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(112, 316);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(108, 21);
            this.textBox1.TabIndex = 2;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(112, 358);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(108, 21);
            this.textBox2.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 361);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(57, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "부모 노드";
            // 
            // textBox3
            // 
            this.textBox3.Location = new System.Drawing.Point(112, 395);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(108, 21);
            this.textBox3.TabIndex = 6;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 398);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(85, 12);
            this.label3.TabIndex = 5;
            this.label3.Text = "이전 형제 노드";
            // 
            // textBox4
            // 
            this.textBox4.Location = new System.Drawing.Point(112, 435);
            this.textBox4.Name = "textBox4";
            this.textBox4.Size = new System.Drawing.Size(108, 21);
            this.textBox4.TabIndex = 8;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 438);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(85, 12);
            this.label4.TabIndex = 7;
            this.label4.Text = "다음 형제 노드";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(234, 319);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(38, 12);
            this.label5.TabIndex = 9;
            this.label5.Text = "label5";
            // 
            // listBox1
            // 
            this.listBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 12;
            this.listBox1.Location = new System.Drawing.Point(236, 343);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(131, 108);
            this.listBox1.TabIndex = 10;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 505);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.textBox4);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.treeView1);
            this.Name = "Form1";
            this.Text = "배재대학교";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TreeView treeView1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.ListBox listBox1;
    }
}

