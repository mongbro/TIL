namespace _8._7_1
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
            this.style = new System.Windows.Forms.Label();
            this.Align_left = new System.Windows.Forms.RadioButton();
            this.Align_center = new System.Windows.Forms.RadioButton();
            this.Align_right = new System.Windows.Forms.RadioButton();
            this.align = new System.Windows.Forms.Label();
            this.style_bold = new System.Windows.Forms.CheckBox();
            this.style_underline = new System.Windows.Forms.CheckBox();
            this.style_italic = new System.Windows.Forms.CheckBox();
            this.style_strikeout = new System.Windows.Forms.CheckBox();
            this.changetext = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // style
            // 
            this.style.AutoSize = true;
            this.style.Font = new System.Drawing.Font("굴림", 20F);
            this.style.Location = new System.Drawing.Point(204, 29);
            this.style.Name = "style";
            this.style.Size = new System.Drawing.Size(93, 27);
            this.style.TabIndex = 0;
            this.style.Text = "스타일";
            // 
            // Align_left
            // 
            this.Align_left.AutoSize = true;
            this.Align_left.Location = new System.Drawing.Point(100, 108);
            this.Align_left.Name = "Align_left";
            this.Align_left.Size = new System.Drawing.Size(47, 16);
            this.Align_left.TabIndex = 1;
            this.Align_left.Text = "왼쪽";
            this.Align_left.UseVisualStyleBackColor = true;
            this.Align_left.CheckedChanged += new System.EventHandler(this.Align_left_CheckedChanged);
            // 
            // Align_center
            // 
            this.Align_center.AutoSize = true;
            this.Align_center.Location = new System.Drawing.Point(100, 163);
            this.Align_center.Name = "Align_center";
            this.Align_center.Size = new System.Drawing.Size(59, 16);
            this.Align_center.TabIndex = 1;
            this.Align_center.Text = "가운데";
            this.Align_center.UseVisualStyleBackColor = true;
            this.Align_center.CheckedChanged += new System.EventHandler(this.Align_center_CheckedChanged);
            // 
            // Align_right
            // 
            this.Align_right.AutoSize = true;
            this.Align_right.Location = new System.Drawing.Point(100, 220);
            this.Align_right.Name = "Align_right";
            this.Align_right.Size = new System.Drawing.Size(59, 16);
            this.Align_right.TabIndex = 1;
            this.Align_right.Text = "오른쪽";
            this.Align_right.UseVisualStyleBackColor = true;
            this.Align_right.CheckedChanged += new System.EventHandler(this.Align_right_CheckedChanged);
            // 
            // align
            // 
            this.align.AutoSize = true;
            this.align.Font = new System.Drawing.Font("굴림", 20F);
            this.align.Location = new System.Drawing.Point(95, 29);
            this.align.Name = "align";
            this.align.Size = new System.Drawing.Size(66, 27);
            this.align.TabIndex = 0;
            this.align.Text = "정렬";
            // 
            // style_bold
            // 
            this.style_bold.AutoSize = true;
            this.style_bold.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.style_bold.Location = new System.Drawing.Point(209, 108);
            this.style_bold.Name = "style_bold";
            this.style_bold.Size = new System.Drawing.Size(48, 16);
            this.style_bold.TabIndex = 2;
            this.style_bold.Text = "굵게";
            this.style_bold.UseVisualStyleBackColor = true;
            this.style_bold.CheckedChanged += new System.EventHandler(this.style_bold_CheckedChanged);
            // 
            // style_underline
            // 
            this.style_underline.AutoSize = true;
            this.style_underline.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.style_underline.Location = new System.Drawing.Point(209, 146);
            this.style_underline.Name = "style_underline";
            this.style_underline.Size = new System.Drawing.Size(48, 16);
            this.style_underline.TabIndex = 2;
            this.style_underline.Text = "밑줄";
            this.style_underline.UseVisualStyleBackColor = true;
            this.style_underline.CheckedChanged += new System.EventHandler(this.style_underline_CheckedChanged);
            // 
            // style_italic
            // 
            this.style_italic.AutoSize = true;
            this.style_italic.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.style_italic.Location = new System.Drawing.Point(209, 182);
            this.style_italic.Name = "style_italic";
            this.style_italic.Size = new System.Drawing.Size(60, 16);
            this.style_italic.TabIndex = 2;
            this.style_italic.Text = "이탤릭";
            this.style_italic.UseVisualStyleBackColor = true;
            this.style_italic.CheckedChanged += new System.EventHandler(this.style_italic_CheckedChanged);
            // 
            // style_strikeout
            // 
            this.style_strikeout.AutoSize = true;
            this.style_strikeout.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.style_strikeout.Location = new System.Drawing.Point(209, 220);
            this.style_strikeout.Name = "style_strikeout";
            this.style_strikeout.Size = new System.Drawing.Size(60, 16);
            this.style_strikeout.TabIndex = 2;
            this.style_strikeout.Text = "취소선";
            this.style_strikeout.UseVisualStyleBackColor = true;
            this.style_strikeout.CheckedChanged += new System.EventHandler(this.style_strikeout_CheckedChanged);
            // 
            // changetext
            // 
            this.changetext.AutoSize = true;
            this.changetext.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.changetext.Location = new System.Drawing.Point(97, 268);
            this.changetext.MinimumSize = new System.Drawing.Size(200, 40);
            this.changetext.Name = "changetext";
            this.changetext.Size = new System.Drawing.Size(200, 40);
            this.changetext.TabIndex = 3;
            this.changetext.Text = "저의 모양을 바꾸세요!!";
            this.changetext.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(381, 362);
            this.Controls.Add(this.changetext);
            this.Controls.Add(this.style_strikeout);
            this.Controls.Add(this.style_italic);
            this.Controls.Add(this.style_underline);
            this.Controls.Add(this.style_bold);
            this.Controls.Add(this.Align_right);
            this.Controls.Add(this.Align_center);
            this.Controls.Add(this.Align_left);
            this.Controls.Add(this.style);
            this.Controls.Add(this.align);
            this.Name = "Form1";
            this.Text = "ExCh8_7_1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label style;
        private System.Windows.Forms.RadioButton Align_center;
        private System.Windows.Forms.RadioButton Align_right;
        private System.Windows.Forms.RadioButton Align_left;
        private System.Windows.Forms.Label align;
        private System.Windows.Forms.CheckBox style_bold;
        private System.Windows.Forms.CheckBox style_underline;
        private System.Windows.Forms.CheckBox style_italic;
        private System.Windows.Forms.CheckBox style_strikeout;
        private System.Windows.Forms.Label changetext;
    }
}

