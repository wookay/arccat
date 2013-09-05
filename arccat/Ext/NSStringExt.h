//
//  NSStringExt.h
//  TestApp
//
//  Created by ssukcha on 05/09/13.
//  Copyright (c) 2013 factorcat. All rights reserved.
//

#import <Foundation/Foundation.h>


#define EMPTY_STRING     @""
#define SPACE            @" "
#define LF               @"\n"
#define TAB              @"\t"
#define AMP              @"&"
#define AT_SIGN          @"@"
#define EQUAL            @"="
#define COLON            @":"
#define SEMICOLON        @";"
#define SEMICOLON_SPACE  @"; "
#define COMMA            @","
#define UNDERBAR         @"_"
#define COMMA_SPACE      @", "
#define COMMA_LF         @",\n"
#define DOT              @"."
#define DOT_SPACE        @". "
#define DOT_DOT          @".."
#define STAR             @"*"
#define SLASH            @"/"
#define PLUS             @"+"
#define PIPE             @"|"
#define MINUS            @"-"
#define QUESTION_MARK    @"?"
#define EXCLAMATION_MARK @"!"
#define DOLLAR           @"$"
#define TILDE            @"~"
#define LESS_THAN        @"<"
#define GREATER_THAN     @">"
#define OPENING_BRACE    @"{"
#define CLOSING_BRACE    @"}"
#define OPENING_PARENTHESE      @"("
#define CLOSING_PARENTHESE      @")"
#define OPENING_SQUARE_BRACKET  @"["
#define CLOSING_SQUARE_BRACKET  @"]"
#define DOUBLE_QUOTATION_MARK   @"\""
#define SINGLE_QUOTATION_MARK   @"'"

NSString* SWF(NSString* format, ...) ;
NSArray* _w(NSString* str) ;

@interface NSString (Ext)

-(NSString*) strip ;
-(NSArray*) split:(NSString*)sep ;
-(NSString*) reverse ;
-(NSString*) slice:(int)loc :(int)length_ ;
-(NSString*) slice:(int)loc backward:(int)backward ;
-(NSString*) gsub:(NSString*)str to:(NSString*)to ;
-(BOOL) include:(NSString*)str ;
-(NSString*) repeat:(int)times ;
-(int) to_int ;
-(float) to_float ;
-(double) to_double ;
-(NSString*) to_s ;
-(NSString*) ljust:(int)justified ;

@end
