namespace _04_1
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
            System.Windows.Forms.TreeNode treeNode15 = new System.Windows.Forms.TreeNode("한국어문학과");
            System.Windows.Forms.TreeNode treeNode16 = new System.Windows.Forms.TreeNode("하워드대학", new System.Windows.Forms.TreeNode[] {
            treeNode15});
            System.Windows.Forms.TreeNode treeNode17 = new System.Windows.Forms.TreeNode("경영학과");
            System.Windows.Forms.TreeNode treeNode18 = new System.Windows.Forms.TreeNode("서재필대학", new System.Windows.Forms.TreeNode[] {
            treeNode17});
            System.Windows.Forms.TreeNode treeNode19 = new System.Windows.Forms.TreeNode("컴퓨터공학과");
            System.Windows.Forms.TreeNode treeNode20 = new System.Windows.Forms.TreeNode("정보통신공학과");
            System.Windows.Forms.TreeNode treeNode21 = new System.Windows.Forms.TreeNode("게임공학과");
            System.Windows.Forms.TreeNode treeNode22 = new System.Windows.Forms.TreeNode("아펜젤러대학", new System.Windows.Forms.TreeNode[] {
            treeNode19,
            treeNode20,
            treeNode21});
            System.Windows.Forms.TreeNode treeNode23 = new System.Windows.Forms.TreeNode("항공운항과");
            System.Windows.Forms.TreeNode treeNode24 = new System.Windows.Forms.TreeNode("조경학과");
            System.Windows.Forms.TreeNode treeNode25 = new System.Windows.Forms.TreeNode("피아노과");
            System.Windows.Forms.TreeNode treeNode26 = new System.Windows.Forms.TreeNode("김소월대학", new System.Windows.Forms.TreeNode[] {
            treeNode23,
            treeNode24,
            treeNode25});
            System.Windows.Forms.TreeNode treeNode27 = new System.Windows.Forms.TreeNode("주시경대학");
            System.Windows.Forms.TreeNode treeNode28 = new System.Windows.Forms.TreeNode("배재대학교", new System.Windows.Forms.TreeNode[] {
            treeNode16,
            treeNode18,
            treeNode22,
            treeNode26,
            treeNode27});
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
            treeNode15.Name = "노드6";
            treeNode15.Text = "한국어문학과";
            treeNode16.Name = "노드1";
            treeNode16.Text = "하워드대학";
            treeNode17.Name = "노드7";
            treeNode17.Text = "경영학과";
            treeNode18.Name = "노드2";
            treeNode18.Text = "서재필대학";
            treeNode19.Name = "노드8";
            treeNode19.Text = "컴퓨터공학과";
            treeNode20.Name = "노드9";
            treeNode20.Text = "정보통신공학과";
            treeNode21.Name = "노드10";
            treeNode21.Text = "게임공학과";
            treeNode22.Name = "노드3";
            treeNode22.Text = "아펜젤러대학";
            treeNode23.Name = "노드11";
            treeNode23.Text = "항공운항과";
            treeNode24.Name = "노드12";
            treeNode24.Text = "조경학과";
            treeNode25.Name = "노드13";
            treeNode25.Text = "피아노과";
            treeNode26.Name = "노드4";
            treeNode26.Text = "김소월대학";
            treeNode27.Name = "노드5";
            treeNode27.Text = "주시경대학";
            treeNode28.Name = "노드0";
            treeNode28.Text = "배재대학교";
            this.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[] {
            treeNode28});
            this.treeView1.Size = new System.Drawing.Size(429, 264);
            this.treeView1.TabIndex = 0;
            this.treeView1.AfterSelect += new System.Windows.Forms.TreeViewEventHandler(this.treeView1_AfterSelect);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 297);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(69, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "선택한 노드";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(103, 294);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(138, 21);
            this.textBox1.TabIndex = 2;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(103, 335);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(138, 21);
            this.textBox2.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 338);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(57, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "부모 노드";
            // 
            // textBox3
            // 
            this.textBox3.Location = new System.Drawing.Point(103, 377);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(138, 21);
            this.textBox3.TabIndex = 8;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 380);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(85, 12);
            this.label3.TabIndex = 7;
            this.label3.Text = "이전 형제 노드";
            // 
            // textBox4
            // 
            this.textBox4.Location = new System.Drawing.Point(103, 418);
            this.textBox4.Name = "textBox4";
            this.textBox4.Size = new System.Drawing.Size(138, 21);
            this.textBox4.TabIndex = 6;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 421);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(85, 12);
            this.label4.TabIndex = 5;
            this.label4.Text = "다음 형제 노드";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(266, 288);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(57, 12);
            this.label5.TabIndex = 9;
            this.label5.Text = "자식 노드";
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 12;
            this.listBox1.Location = new System.Drawing.Point(268, 315);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(173, 124);
            this.listBox1.TabIndex = 10;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(453, 505);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox4);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.treeView1);
            this.Name = "Form1";
            this.Text = "Form1";
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

