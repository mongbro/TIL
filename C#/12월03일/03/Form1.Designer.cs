namespace _03
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
            this.name = new System.Windows.Forms.Label();
            this.tel = new System.Windows.Forms.Label();
            this.namebox = new System.Windows.Forms.TextBox();
            this.telbox = new System.Windows.Forms.TextBox();
            this.add = new System.Windows.Forms.Button();
            this.del = new System.Windows.Forms.Button();
            this.listview = new System.Windows.Forms.ListView();
            this.namecol = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.telcol = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.SuspendLayout();
            // 
            // name
            // 
            this.name.AutoSize = true;
            this.name.Location = new System.Drawing.Point(27, 24);
            this.name.Name = "name";
            this.name.Size = new System.Drawing.Size(29, 12);
            this.name.TabIndex = 0;
            this.name.Text = "이름";
            // 
            // tel
            // 
            this.tel.AutoSize = true;
            this.tel.Location = new System.Drawing.Point(27, 89);
            this.tel.Name = "tel";
            this.tel.Size = new System.Drawing.Size(53, 12);
            this.tel.TabIndex = 1;
            this.tel.Text = "전화번호";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(29, 53);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(153, 21);
            this.namebox.TabIndex = 2;
            // 
            // telbox
            // 
            this.telbox.Location = new System.Drawing.Point(29, 116);
            this.telbox.Name = "telbox";
            this.telbox.Size = new System.Drawing.Size(153, 21);
            this.telbox.TabIndex = 3;
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(29, 162);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(153, 23);
            this.add.TabIndex = 4;
            this.add.Text = "추가";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // del
            // 
            this.del.Location = new System.Drawing.Point(29, 209);
            this.del.Name = "del";
            this.del.Size = new System.Drawing.Size(153, 23);
            this.del.TabIndex = 5;
            this.del.Text = "삭제";
            this.del.UseVisualStyleBackColor = true;
            this.del.Click += new System.EventHandler(this.del_Click);
            // 
            // listview
            // 
            this.listview.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.namecol,
            this.telcol});
            this.listview.HideSelection = false;
            this.listview.Location = new System.Drawing.Point(235, 53);
            this.listview.MultiSelect = false;
            this.listview.Name = "listview";
            this.listview.Size = new System.Drawing.Size(282, 179);
            this.listview.TabIndex = 6;
            this.listview.UseCompatibleStateImageBehavior = false;
            this.listview.View = System.Windows.Forms.View.Details;
            this.listview.DoubleClick += new System.EventHandler(this.listview_DoubleClick);
            // 
            // namecol
            // 
            this.namecol.Text = "이름";
            this.namecol.Width = 80;
            // 
            // telcol
            // 
            this.telcol.Text = "전화번호";
            this.telcol.Width = 198;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(552, 264);
            this.Controls.Add(this.listview);
            this.Controls.Add(this.del);
            this.Controls.Add(this.add);
            this.Controls.Add(this.telbox);
            this.Controls.Add(this.namebox);
            this.Controls.Add(this.tel);
            this.Controls.Add(this.name);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label name;
        private System.Windows.Forms.Label tel;
        private System.Windows.Forms.TextBox namebox;
        private System.Windows.Forms.TextBox telbox;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button del;
        private System.Windows.Forms.ListView listview;
        private System.Windows.Forms.ColumnHeader namecol;
        private System.Windows.Forms.ColumnHeader telcol;
    }
}

