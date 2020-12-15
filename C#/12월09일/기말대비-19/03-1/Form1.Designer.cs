namespace _03_1
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
            this.label1 = new System.Windows.Forms.Label();
            this.namebox = new System.Windows.Forms.TextBox();
            this.add = new System.Windows.Forms.Button();
            this.telbox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.del = new System.Windows.Forms.Button();
            this.listView1 = new System.Windows.Forms.ListView();
            this.name = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.tel = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 21);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "이름";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(12, 48);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(140, 21);
            this.namebox.TabIndex = 1;
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(16, 158);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(136, 23);
            this.add.TabIndex = 2;
            this.add.Text = "추가";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // telbox
            // 
            this.telbox.Location = new System.Drawing.Point(14, 112);
            this.telbox.Name = "telbox";
            this.telbox.Size = new System.Drawing.Size(140, 21);
            this.telbox.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(14, 85);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "전화번호";
            // 
            // del
            // 
            this.del.Location = new System.Drawing.Point(16, 203);
            this.del.Name = "del";
            this.del.Size = new System.Drawing.Size(136, 23);
            this.del.TabIndex = 5;
            this.del.Text = "삭제";
            this.del.UseVisualStyleBackColor = true;
            this.del.Click += new System.EventHandler(this.del_Click);
            // 
            // listView1
            // 
            this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.name,
            this.tel});
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(176, 21);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(226, 205);
            this.listView1.TabIndex = 6;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            this.listView1.DoubleClick += new System.EventHandler(this.listView1_DoubleClick);
            // 
            // name
            // 
            this.name.Text = "이름";
            this.name.Width = 75;
            // 
            // tel
            // 
            this.tel.Text = "전화번호";
            this.tel.Width = 147;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(435, 256);
            this.Controls.Add(this.listView1);
            this.Controls.Add(this.del);
            this.Controls.Add(this.telbox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.add);
            this.Controls.Add(this.namebox);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Final";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox namebox;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.TextBox telbox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button del;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.ColumnHeader name;
        private System.Windows.Forms.ColumnHeader tel;
    }
}

