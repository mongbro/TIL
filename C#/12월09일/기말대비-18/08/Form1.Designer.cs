namespace _08
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
            this.label2 = new System.Windows.Forms.Label();
            this.namebox = new System.Windows.Forms.TextBox();
            this.telbox = new System.Windows.Forms.TextBox();
            this.addbtn = new System.Windows.Forms.Button();
            this.delbtn = new System.Windows.Forms.Button();
            this.listView1 = new System.Windows.Forms.ListView();
            this.name = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.tel = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(35, 61);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "이름";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(35, 130);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 1;
            this.label2.Text = "전화번호";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(37, 88);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(180, 21);
            this.namebox.TabIndex = 2;
            // 
            // telbox
            // 
            this.telbox.Location = new System.Drawing.Point(37, 158);
            this.telbox.Name = "telbox";
            this.telbox.Size = new System.Drawing.Size(180, 21);
            this.telbox.TabIndex = 3;
            // 
            // addbtn
            // 
            this.addbtn.Location = new System.Drawing.Point(37, 224);
            this.addbtn.Name = "addbtn";
            this.addbtn.Size = new System.Drawing.Size(180, 23);
            this.addbtn.TabIndex = 4;
            this.addbtn.Text = "추가";
            this.addbtn.UseVisualStyleBackColor = true;
            this.addbtn.Click += new System.EventHandler(this.addbtn_Click);
            // 
            // delbtn
            // 
            this.delbtn.Location = new System.Drawing.Point(37, 274);
            this.delbtn.Name = "delbtn";
            this.delbtn.Size = new System.Drawing.Size(180, 23);
            this.delbtn.TabIndex = 5;
            this.delbtn.Text = "삭제";
            this.delbtn.UseVisualStyleBackColor = true;
            this.delbtn.Click += new System.EventHandler(this.delbtn_Click);
            // 
            // listView1
            // 
            this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.name,
            this.tel});
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(248, 61);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(321, 236);
            this.listView1.TabIndex = 6;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            // 
            // name
            // 
            this.name.Text = "이름";
            this.name.Width = 121;
            // 
            // tel
            // 
            this.tel.Text = "전화번호";
            this.tel.Width = 196;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(620, 342);
            this.Controls.Add(this.listView1);
            this.Controls.Add(this.delbtn);
            this.Controls.Add(this.addbtn);
            this.Controls.Add(this.telbox);
            this.Controls.Add(this.namebox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox namebox;
        private System.Windows.Forms.TextBox telbox;
        private System.Windows.Forms.Button addbtn;
        private System.Windows.Forms.Button delbtn;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.ColumnHeader name;
        private System.Windows.Forms.ColumnHeader tel;
    }
}

