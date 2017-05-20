/*
     File: shaderUtil.h
 Abstract: Functions that compile, link and validate shader programs.
  Version: 1.13
 
 Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple
 Inc. ("Apple") in consideration of your agreement to the following
 terms, and your use, installation, modification or redistribution of
 this Apple software constitutes acceptance of these terms.  If you do
 not agree with these terms, please do not use, install, modify or
 redistribute this Apple software.
 
 In consideration of your agreement to abide by the following terms, and
 subject to these terms, Apple grants you a personal, non-exclusive
 license, under Apple's copyrights in this original Apple software (the
 "Apple Software"), to use, reproduce, modify and redistribute the Apple
 Software, with or without modifications, in source and/or binary forms;
 provided that if you redistribute the Apple Software in its entirety and
 without modifications, you must retain this notice and the following
 text and disclaimers in all such redistributions of the Apple Software.
 Neither the name, trademarks, service marks or logos of Apple Inc. may
 be used to endorse or promote products derived from the Apple Software
 without specific prior written permission from Apple.  Except as
 expressly stated in this notice, no other rights or licenses, express or
 implied, are granted by Apple herein, including but not limited to any
 patent rights that may be infringed by your derivative works or by other
 works in which the Apple Software may be incorporated.
 
 The Apple Software is provided by Apple on an "AS IS" basis.  APPLE
 MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
 THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS
 FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND
 OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
 
 IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL
 OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,
 MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED
 AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),
 STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
 
 Copyright (C) 2014 Apple Inc. All Rights Reserved.
 
 */

#ifndef SHADERUTIL_H
#define SHADERUTIL_H

#import <OpenGLES/ES2/gl.h>
//着色器：分为顶点着色器（Vertex Shader）和片元着色器（Fragment Shader）
//步骤：创建（glCreateProgram）-->编译（glCompileShader）-->装配（glAttachShader）-->链接（glLinkProgram）-->使用（glUseProgram）
/* Shader Utilities */
//编译
GLint glueCompileShader(GLenum target, GLsizei count, const GLchar **sources, GLuint *shader);
//链接
GLint glueLinkProgram(GLuint program);
//验证
GLint glueValidateProgram(GLuint program);
//获取着色器Uniform变量
GLint glueGetUniformLocation(GLuint program, const GLchar *name);

//创建着色器
GLint glueCreateProgram(const GLchar *vertSource, const GLchar *fragSource,
                    GLsizei attribNameCt, const GLchar **attribNames, 
                    const GLint *attribLocations,
                    GLsizei uniformNameCt, const GLchar **uniformNames,
                    GLint *uniformLocations,
                    GLuint *program);

#ifdef __cplusplus
}
#endif

#endif /* SHADERUTIL_H */