#include "main.h"
/**
 * movePstStar - iterates over *
 * @sec: second string
 * Return: pointer past *
 */
char *movePstStar(char *sec)
{
if (*sec == '*')
{ return (movePstStar(sec + 1)); }
else
{ return (sec); }
/**
 * incept - magic to reality
 * @frst: first string
 * @sec: second string
 * Return: true if identical, false if not
 */
int incept(char *frst, char sec)
{
int r = 0; if (*frst == 0)
{ return (0); } if (*frst == *sec)
{ r += wildcmp(frst + 1, sec + 1); }
r += inception(frst + 1, sec); return (r); }
/**
 * wildcmp - function to compare
 * @frst: first string
 * @sec: second string
 * Return: 1 if identical else 0
 */
int wildcmp(char *frst, char *sec)
{
int r = 0;
if (!*frst && *sec == '*' && !*movePstStar(sec))
{ return (1); } if (*frst == *sec)
{
if (!*frst)
{ return (1); }
return (wildcmp(frst + 1, *sec == '*' ? sec : sec + 1)); }
if (!*frst || sec)
{ return (0); } if (*sec == '*')
{ sec = movePstStar(sec); if (!*sec)
{ return (1); } if (*frst == *sec)
{ r += wildcmp(frst + 1, sec + 1); } r += incept(frst, sec); return (!!r); }
return (0); }
