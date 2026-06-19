<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DOL Linear - English Center | Chọn Đúng Khóa, Lên Band Mục Tiêu</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <style>
        :root {
            --dol-red: #E31818;
            --dol-red-hover: #C91212;
            --dol-dark: #1E293B;
            --dol-gray-bg: #F8FAFC;
            --dol-border: #E2E8F0;
            --text-secondary: #64748B;
            --radius-lg: 24px;
            --radius-md: 16px;
            --transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);
        }

        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }

        html {
            scroll-behavior: smooth;
        }

        body {
            font-family: 'SF Pro Display', -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Helvetica, Arial, sans-serif;
            color: var(--dol-dark);
            background-color: #FFFFFF;
            overflow-x: hidden;
        }

        /* Top Bar Thông Báo */
        .top-notification {
            background-color: #FFF0F0;
            color: var(--dol-red);
            text-align: center;
            padding: 12px 20px;
            font-size: 14px;
            font-weight: 700;
            border-bottom: 1px solid #FFE0E0;
        }

        /* Header Navigation */
        header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 18px 8%;
            background: rgba(255, 255, 255, 0.95);
            backdrop-filter: blur(10px);
            position: sticky;
            top: 0;
            z-index: 1000;
            border-bottom: 1px solid var(--dol-border);
        }

        .logo-container {
            display: flex;
            align-items: center;
            gap: 12px;
            text-decoration: none;
        }
        .logo-icon {
            width: 40px;
            height: 40px;
            background-color: var(--dol-red);
            border-radius: 12px;
            display: flex;
            align-items: center;
            justify-content: center;
            color: white;
            font-weight: bold;
            font-size: 20px;
            box-shadow: 0 4px 12px rgba(227, 24, 24, 0.15);
        }
        .logo-text {
            display: flex;
            flex-direction: column;
        }
        .logo-title {
            font-size: 18px;
            font-weight: 800;
            color: #0F172A;
            line-height: 1.1;
        }
        .logo-sub {
            font-size: 11px;
            font-weight: 700;
            color: var(--dol-red);
            letter-spacing: 1px;
            text-transform: uppercase;
        }

        nav {
            display: flex;
            align-items: center;
            gap: 6px;
        }

        .nav-item > a {
            text-decoration: none;
            color: #334155;
            font-weight: 700;
            font-size: 15px;
            padding: 10px 16px;
            display: inline-block;
            transition: var(--transition);
            border-radius: 8px;
        }

        .nav-item:hover > a {
            color: var(--dol-red);
            background-color: var(--dol-gray-bg);
        }

        .header-actions {
            display: flex;
            align-items: center;
            gap: 12px;
        }
        .btn-test-nhanh {
            border: 2px solid var(--dol-red);
            color: var(--dol-red);
            padding: 10px 24px;
            border-radius: 100px;
            text-decoration: none;
            font-weight: 700;
            font-size: 14px;
            transition: var(--transition);
        }
        .btn-test-nhanh:hover {
            background-color: #FFF0F0;
        }
        .btn-dang-ky-tv {
            background-color: var(--dol-red);
            color: #FFFFFF;
            padding: 12px 26px;
            border-radius: 100px;
            text-decoration: none;
            font-weight: 700;
            font-size: 14px;
            transition: var(--transition);
            box-shadow: 0 4px 12px rgba(227, 24, 24, 0.15);
        }
        .btn-dang-ky-tv:hover {
            background-color: var(--dol-red-hover);
        }

        /* Hero Section */
        .hero-section {
            display: flex;
            align-items: center;
            justify-content: space-between;
            padding: 80px 8%;
            max-width: 1400px;
            margin: 0 auto;
            gap: 60px;
            flex-wrap: wrap;
        }

        .hero-content {
            flex: 1.1;
            min-width: 320px;
        }

        .ai-badge {
            background-color: #FFF0F0;
            color: var(--dol-red);
            padding: 8px 16px;
            border-radius: 100px;
            font-size: 13px;
            font-weight: 800;
            display: inline-flex;
            align-items: center;
            gap: 8px;
            margin-bottom: 24px;
            border: 1px solid #FFE0E0;
        }

        .hero-content h1 {
            font-size: 48px;
            font-weight: 900;
            line-height: 1.2;
            letter-spacing: -1px;
            margin-bottom: 24px;
            color: #0F172A;
        }

        .hero-content p {
            font-size: 18px;
            color: #475569;
            margin-bottom: 40px;
            font-weight: 500;
            line-height: 1.6;
        }

        .hero-btns {
            display: flex;
            gap: 15px;
            margin-bottom: 45px;
            flex-wrap: wrap;
        }
        .btn-hero-red {
            background-color: var(--dol-red);
            color: white;
            padding: 16px 32px;
            border-radius: 100px;
            text-decoration: none;
            font-weight: 700;
            font-size: 15px;
            transition: var(--transition);
            box-shadow: 0 8px 20px rgba(227, 24, 24, 0.2);
        }
        .btn-hero-red:hover {
            background-color: var(--dol-red-hover);
            transform: translateY(-2px);
        }
        .btn-hero-white {
            background: white;
            border: 2px solid var(--dol-border);
            color: #334155;
            padding: 16px 32px;
            border-radius: 100px;
            text-decoration: none;
            font-weight: 700;
            font-size: 15px;
            transition: var(--transition);
        }
        .btn-hero-white:hover {
            border-color: var(--dol-red);
            color: var(--dol-red);
        }

        /* Khối thống kê lơ lửng góc dưới */
        .hero-stats-row {
            display: flex;
            gap: 20px;
            border-top: 1px solid var(--dol-border);
            padding-top: 30px;
        }
        .stat-box-mini {
            background: var(--dol-gray-bg);
            border: 1px solid var(--dol-border);
            padding: 16px 24px;
            border-radius: var(--radius-md);
            flex: 1;
        }
        .stat-box-mini strong {
            font-size: 26px;
            font-weight: 900;
            color: #0F172A;
            display: block;
        }
        .stat-box-mini span {
            font-size: 13px;
            color: var(--text-secondary);
            font-weight: 700;
        }

        /* Banner họa hình bên phải */
        .hero-visual {
            flex: 0.9;
            min-width: 380px;
            position: relative;
        }
        .visual-card-wrapper {
            background: #FFFFFF;
            border-radius: 32px;
            border: 1px solid var(--dol-border);
            padding: 24px;
            box-shadow: 0 30px 60px rgba(0,0,0,0.03);
        }
        .visual-card-wrapper img {
            width: 100%;
            height: auto;
            border-radius: 20px;
            display: block;
        }
        .ai-tutor-tag {
            position: absolute;
            bottom: -25px;
            left: 20px;
            right: 20px;
            background: #FFFFFF;
            border: 1px solid var(--dol-border);
            border-radius: var(--radius-md);
            padding: 16px;
            box-shadow: 0 15px 30px rgba(0,0,0,0.06);
            display: flex;
            align-items: start;
            gap: 14px;
        }
        .ai-tutor-icon {
            width: 38px;
            height: 38px;
            background-color: var(--dol-red);
            color: white;
            border-radius: 10px;
            display: flex;
            align-items: center;
            justify-content: center;
            font-size: 18px;
            flex-shrink: 0;
        }

        /* Khóa học trọng tâm */
        .courses-section {
            padding: 100px 8%;
            background-color: #FFFFFF;
        }
        .center-title-box {
            text-align: center;
            max-width: 700px;
            margin: 0 auto 60px auto;
        }
        .sub-badge {
            color: var(--dol-red);
            font-weight: 800;
            text-transform: uppercase;
            letter-spacing: 2px;
            font-size: 13px;
            margin-bottom: 12px;
            display: block;
        }
        .center-title-box h2 {
            font-size: 36px;
            font-weight: 900;
            color: #0F172A;
        }
        .courses-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 30px;
        }
        .course-card {
            background: #FFFFFF;
            border: 1
