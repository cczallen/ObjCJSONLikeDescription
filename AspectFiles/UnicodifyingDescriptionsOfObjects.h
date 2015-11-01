// <XAspect>
// UnicodifyingDescriptionsOfObjects.h
//
// Copyright (c) 2015 Xaree Lee (Kang-Yu Lee)
// Released under the MIT license (see below)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

// -----------------------------------------------------------------------------
/*
 WARNING
 =======
 This library will change the `description` and `debugDescription` of some
 collection classes to return a JSON-like output. Use this library carefully.
 */
// -----------------------------------------------------------------------------


#import <Foundation/Foundation.h>

#define XL_OVERLOADABLE __attribute__((overloadable))

#pragma mark Overloadable description functions
XL_OVERLOADABLE NSString *xl_descrtionForObject(id obj) ;
XL_OVERLOADABLE NSString *xl_descrtionForObject(id obj, id locale);
XL_OVERLOADABLE NSString *xl_descrtionForObject(id obj, id locale, NSUInteger level);

#pragma mark Customizable collection description
NSString *xl_collectionDescription(id collection, NSString *openCollection, NSString *closeCollection, NSString *separator, NSUInteger level, NSString *(^elementDescriptionMapper)(id collection, id element, NSUInteger elementLevel));

#pragma mark JSON-like description for collection
NSString *xl_JSON_array_description(id collection, id locale, NSUInteger level);
NSString *xl_JSON_object_description(id collection, id locale, NSUInteger level);