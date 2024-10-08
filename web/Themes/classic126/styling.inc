<?php
declare(strict_types=1);
namespace MRBS;

// CLASSIC MRBS 1.2.6 THEME

// ***** COLOURS ************************
// Colours used in MRBS.    All the colours are defined here as PHP variables

$body_background_color          = "#ffffed";    // background colour for the main body
$standard_font_color            = "black";      // default font color
$header_font_color              = "#ffffff";    // font color for text in headers
$highlight_font_color           = "red";        // used for highlighting text (eg links, errors)
$color_key_font_color           = "#5B69A6";    // used in the colour key table

$banner_back_color              = "#c0e0ff";    // background colour for banner
$banner_border_color            = "#5B69A6";    // border colour for banner
$banner_font_color              = $banner_border_color;       // font colour for banner

$header_back_color              = "#999999";  // background colour for headers

$admin_table_header_back_color  = $header_back_color;     // background colour for header and also border colour for table cells
$admin_table_header_sep_color   = $body_background_color; // vertical separator colour in header
$admin_table_header_font_color  = $header_font_color;     // font colour for header
$admin_table_border_color       = "#C3CCD3";

$main_table_border_color        = "#dddddd";    // border colour for day/week/month tables - outside
$main_table_header_border_color = "#dddddd";    // border colour for day/week/month tables - header
$main_table_body_h_border_color = "#ffffff";    // border colour for day/week/month tables - body, horizontal
$main_table_body_v_border_color = "#e4e4e4";    // border colour for day/week/month tables - body, vertical
$main_table_month_color         = "#ffffff";    // background colour for days in the month view
$main_table_month_weekend_color = "#f4f4f4";    // background colour for weekends in the month view
$main_table_month_holiday_color = "#e8e8e8";    // background colour for holidays in the month view
$main_table_month_weekend_holiday_color = "#dfdfdf";    // background colour for weekend holidays in the month view
$main_table_month_invalid_color = "#d0d0d0";    // background colour for invalid days in the month view
$main_table_slot_invalid_color  = "#d1d9de";    // background colour for invalid slots in the day and week views
$main_table_slot_private_type_color = "#d1d9de";   // background colour when the type has to kept private
$main_table_labels_back_color   = "#fff0f0";    // background colour for the row labels column
$timeline_color                 = $header_back_color;

// border colours for the main table when it is printed.     These are used by mrbs-print.css.php
$main_table_border_color_print        = "#dddddd";    // border colour for the main table (print view)
$main_table_header_border_color_print = "#dddddd";    // border colour for day/week/month tables - header (print view)
$main_table_body_h_border_color_print = "#dddddd";    // border colour for day/week/month tables - body, horizontal (print view)
$main_table_body_v_border_color_print = "#dddddd";    // border colour for day/week/month tables - body, vertical (print view)

$report_table_border_color      = $standard_font_color;
$report_h2_border_color         = $banner_back_color;     // border colour for <h2> in report.php
$report_h3_border_color         = "#879AA8";              // border colour for <h2> in report.php

$search_table_border_color      = $standard_font_color;

$site_faq_entry_border_color    = "#C3CCD3";          // used to separate individual FAQ's in help.php

$anchor_link_color              = "#5B69A6";          // link color
$anchor_visited_color           = "#5B69A6";          // link color (visited)
$anchor_hover_color             = "red";              // link color (hover)

$anchor_link_color_banner       = $anchor_link_color;          // link color
$anchor_visited_color_banner    = $anchor_visited_color;       // link color (visited)
$anchor_hover_color_banner      = $anchor_hover_color;         // link color (hover)

$anchor_link_color_header       = $anchor_link_color;          // link color
$anchor_visited_color_header    = $anchor_visited_color;       // link color (visited)
$anchor_hover_color_header      = $anchor_hover_color;         // link color (hover)

$column_hidden_color            = $main_table_month_invalid_color;    // hidden days in the week and month views
$calendar_hidden_color          = "#dae0e4";                          // hidden days in the mini-cals
$row_highlight_color            = "#ffc0da";        // used for highlighting a row
$row_even_color                 = "#ffffff"; // even rows in the day and week views
$row_odd_color                  = "#eeeeee"; // odd rows in the day and week views
$row_even_color_weekend         = "#f4f4f4"; // even rows in the day and week views for weekends
$row_odd_color_weekend          = "#e4e4e4"; // odd rows in the day and week views for weekends
$row_even_color_holiday         = "#e8e8e8"; // even rows in the day and week views for holidays
$row_odd_color_holiday          = "#d8d8d8"; // odd rows in the day and week views for holidays
$row_even_color_weekend_holiday = "#dfdfdf"; // even rows in the day and week views for weekend holidays
$row_odd_color_weekend_holiday  = "#cfcfcf"; // odd rows in the day and week views for weekend holidays

$zebra_even_color = "#ffffff";  // Colour for even rows in other tables (eg Search, Report and Users)
$zebra_odd_color  = '#e2e4ff';  // Colour for even rows in other tables (eg Search, Report and Users)

$help_highlight_color           = "#ffe6f0";        // highlighting text on the help page

// Button colours
$button_color_stops = array('#eeeeee', '#cccccc');  // linear gradient colour stops
$button_inset_color = '#a7c7e6';

// These are the colours used for distinguishing between the different types of bookings in the main
// displays in the day, week and month views
$color_types = array(
    'A' => "#FFCCFF",
    'B' => "#99CCCC",
    'C' => "#FF9999",
    'D' => "#FFFF99",
    'E' => "#C0E0FF",
    'F' => "#FFCC99",
    'G' => "#FF6666",
    'H' => "#66FFFF",
    'I' => "#DDFFDD",
    'J' => "#CCCCCC");

// colours used for pending.php and bookings awaiting approval
$outstanding_color         = "#FF4444";     // font colour for the outstanding reservations message in the header
$pending_header_back_color = $header_back_color; // background colour for series headers
$series_entry_back_color   = "#FFFBC2";     // background colour for entries in a series
$pending_control_color     = "#FFF36C";     // background colour for the series +/- controls in pending.php
$attention_color           = '#FFDFBF';     // background colour for the number of bookings awaiting approval

// ***** DIMENSIONS *******************
$banner_border_width          = '0';  // (px)  border width for the outside of the banner
$banner_border_cell_width     = '1';  // (px)  border width for the cells of the banner
$main_table_border_width      = '0';  // (px)  the border width for the outside of the main day/week/month tables
$main_table_cell_border_width = '1';  // (px)  the border width for the cells of the main day/week/month tables
$main_cell_height             = '1.5em'; // height of the cells in the main day/week tables


// ***** FONTS ************************
$standard_font_family  = "Arial, 'Arial Unicode MS', Verdana, sans-serif";

