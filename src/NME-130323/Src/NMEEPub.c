/**
 *	@file NMEEPub.c
 *	@brief NME support for EPUB
 *	@author Yves Piguet.
 *	@copyright 2010-2012, Yves Piguet.
 */

/* License: new BSD license (see header file) */

#include "NME.h"

NMEOutputFormat const NMEOutputFormatOPSXHTML =
{
	" ",	// space
	2,	// indentSpaces
	0,	// defFontSize
	'%',	// ctrlChar
	"<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n"
		"<!-- Generated by Nyctergatis Markup Engine, "
			__DATE__ " " __TIME__ " -->\n"
		"<!DOCTYPE html PUBLIC\n"
		" \"-//W3C//DTD XHTML 1.1//EN\"\n"
		" \"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
		"<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
		"<head>\n"
		"<title>Epub fragment</title>\n"
		"<style type=\"text/css\">\n"
		"h1 {page-break-before: always}\n"
		"p.img {text-align: center}\n"
		"</style>\n"
		"</head>\n"
		"<body>\n",
	"</body>\n</html>\n",	// doc
	4,	// highest heading level
	"<h%{l}%%{x} id=\"h%{o}\"%%>",
		"</h%{l}>\n",	// heading
	"<p>", "</p>\n",	// par
	"<br />",	// line break
	"<pre>\n", "</pre>\n",	// pre
	"", "\n",	// pre line
	TRUE,	// sublistInListItem
	"\n<ul>\n", "</ul>\n",	// UL
	"%%{2*l} %%<li>", "</li>\n",	// UL line
	"\n<ol>\n", "</ol>\n",	// OL
	"%%{2*l} %%<li>", "</li>\n",	// OL line
	"\n<dl>\n", "</dl>\n",	// DL
	"%%{2*l} %%<dt>", "</dt>\n",	// DT
	NULL,	// emptyDT
	"%%{2*l} %%<dd>", "</dd>\n",	// DD
	"<div style=\"margin-left:2em\">\n",
		"</div>\n",	// indented section
	"%%{2*l} %%<p>", "</p>\n",	// indented par
	"<table>\n", "</table>\n",	// table
	"<tr>", "</tr>\n",	// table row
	"<th>", "</th>\n",	// table header cell
	"<td>", "</td>\n",	// table normal cell
	"<hr />\n",	// hr
	"<b>", "</b>",	// bold
	"<i>", "</i>",	// italic
	"<u>", "</u>",	// underline
	"<sup>", "</sup>",	// superscript
	"<sub>", "</sub>",	// subscript
	"<tt>", "</tt>",	// monospace
	"<a href=\"", "</a>", "\">", FALSE,	// link
	"<img src=\"", "\" />", "\" alt=\"", FALSE, TRUE,	// image
	NULL,	// interwiki
	NULL, NULL,	// encodeURLFun
	NMEEncodeCharFunDict, (void *)NMEXMLCharDict,	// char encoder
	NMEEncodeCharFunDict, (void *)NMEXMLCharDict,	// char pre encoder
	70, NULL, NULL,	// wordwrap
	NULL, NULL,	// char hook
	NULL, NULL, NULL, NULL,	// process hooks
	NULL,	// plugins
	NULL,	// autoconverts
	NULL, NULL	// getVar
};
